/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:06:13 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/29 12:44:56 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*i;
	unsigned char	*j;
	size_t			x;

	i = (unsigned char*)dst;
	j = (unsigned char*)src;
	x = 0;
	while (x < n)
	{
		i[x] = j[x];
		if (j[x] == (unsigned char)c)
			return ((void*)i + x + 1);
		x++;
	}
	return (NULL);
}
