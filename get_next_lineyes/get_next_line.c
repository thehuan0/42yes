/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 18:32:32 by jperez-s          #+#    #+#             */
/*   Updated: 2019/12/14 12:47:45 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

static int	ft_line_check(char **rest, char **line)
{
	int		i;
	char	*temp;

	i = 0;
	while ((*rest)[i] != '\n' && (*rest)[i] != '\0')
		i++;
	if ((*rest)[i] == '\n')
	{
		*line = ft_substr(*rest, 0, i);
		temp = ft_strdup(&(*rest)[i + 1]);
		free(*rest);
		*rest = temp;
	}
	else if ((*rest)[i] == '\0')
	{
		*line = ft_strdup(*rest);
		free(*rest);
		*rest = NULL;
		return (0);
	}
	return (1);
}

static int	ft_file_check(int read_bytes, int fd, char **rest, char **line)
{
	if (read_bytes < 0)
		return (-1);
	else if (read_bytes == 0 && rest[fd] == NULL)
	{
		*line = ft_strdup("");
		free(*rest);
		*rest = NULL;
		return (0);
	}
	else
		return (ft_line_check(&rest[fd], line));
}

int			get_next_line(int fd, char **line)
{
	int			read_bytes;
	char		*buff;
	char		*line_temp;
	static char	*rest[4096];

	if (!(buff = malloc(sizeof(char) * (BUFFER_SIZE + 1)))
			|| fd < 0 || line == 0)
		return (-1);
	while ((read_bytes = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		buff[read_bytes] = '\0';
		if (rest[fd] == NULL)
			rest[fd] = ft_strdup(buff);
		else
		{
			line_temp = ft_strjoin(rest[fd], buff);
			free(rest[fd]);
			rest[fd] = line_temp;
		}
		if (ft_strchr(rest[fd], '\n'))
			break ;
	}
	free(buff);
	buff = NULL;
	return (ft_file_check(read_bytes, fd, rest, line));
}
