/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:42:54 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:27:55 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *i;
	unsigned char *j;

	i = (unsigned char*)dst;
	j = (unsigned char*)src;
	if (i == 0 && j == 0)
		return (NULL);
	if (i < j)
	{
		while (len-- > 0)
			*i++ = *j++;
	}
	else
	{
		i = i + len;
		j = j + len;
		while (len-- > 0)
			*--i = *--j;
	}
	return (dst);
}
