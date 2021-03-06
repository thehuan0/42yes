/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:18:04 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 16:05:24 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
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
