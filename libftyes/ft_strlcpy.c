/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:38:20 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/29 12:50:44 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len_ori;
	size_t l;
	size_t q;

	if (src == 0)
		return (0);
	q = dstsize - 1;
	len_ori = ft_strlen(src);
	l = 0;
	if (dstsize == 0)
		return (len_ori);
	while (l < len_ori && l < q)
	{
		dst[l] = src[l];
		l++;
	}
	dst[l] = '\0';
	return (len_ori);
}
