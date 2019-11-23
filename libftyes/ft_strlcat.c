/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:38:37 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:29:57 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int j;
	unsigned int sum;

	i = 0;
	while (dst[i] != '\0')
		i++;
	sum = 0;
	while (src[sum] != '\0')
		sum++;
	if (i <= dstsize)
		sum = sum + i;
	else
		sum = sum + dstsize;
	j = 0;
	while (src[j] != '\0' && (i + 1 < dstsize))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (sum);
}
