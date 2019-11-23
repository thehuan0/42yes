/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 15:18:04 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:30:18 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		len1;
	size_t		len2;
	char		*str;
	size_t		i;
	size_t		j;

	i = -1;
	j = -1;
	len1 = 0;
	len2 = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	str = (char*)malloc(len1 + len2);
	if (!str)
		return (NULL);
	while (++i < len1)
		str[i] = s1[i];
	while (++j < len2)
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
