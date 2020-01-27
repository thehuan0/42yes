/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 18:33:09 by jperez-s          #+#    #+#             */
/*   Updated: 2019/12/14 11:43:22 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t		ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char		*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = ft_strlen(s1);
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		str[j] = s1[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	char		*str;

	len1 = 0;
	len2 = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[len1])
	{
		str[len1] = s1[len1];
		len1++;
	}
	while (s2[len2])
	{
		str[len1] = s2[len2];
		len2++;
		len1++;
	}
	str[len1] = '\0';
	return (str);
}

char		*ft_strchr(const char *s, int c)
{
	char *str;

	str = (char*)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (0);
		}
		str++;
	}
	return (str);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	cont;
	size_t	i;
	size_t	slen;

	cont = 0;
	i = start;
	str = (char*)malloc(len + 1);
	if (!s)
		return (NULL);
	if (!str)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < start)
	{
		str[cont] = '\0';
		return (str);
	}
	while (i < len + start)
		str[cont++] = s[i++];
	str[cont] = '\0';
	return (str);
}
