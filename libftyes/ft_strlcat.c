/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:38:37 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/29 12:50:55 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dest;
	size_t	ori;
	size_t	l;

	ori = ft_strlen(src);
	dest = ft_strlen(dst);
	if (dstsize == 0)
		return (ori);
	if (dstsize < dest)
		return (ori += dstsize);
	else
		ori += dest;
	l = 0;
	while (dest < dstsize - 1 && src[l] != '\0')
	{
		dst[dest] = src[l];
		dest++;
		l++;
	}
	dst[dest] = '\0';
	return (ori);
}
