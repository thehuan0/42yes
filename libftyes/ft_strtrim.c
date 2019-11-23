/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 16:06:29 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:31:22 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_find(char c, char const *set)
{
	int	size;
	int	i;

	i = 0;
	size = ft_strlen(set);
	while (i < size)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	size;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	size = ft_strlen(s1);
	while (ft_find(s1[i], set))
		i++;
	while (size > 0 && ft_find(s1[size - 1], set))
		size--;
	if (size < i)
		size = i;
	str = (char*)malloc(size - i + 1);
	if (!str)
		return (NULL);
	while (i < size)
		str[j++] = (char)s1[i++];
	str[j] = '\0';
	return (str);
}
