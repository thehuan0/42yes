/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 12:06:13 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:27:31 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *i;
	unsigned char *j;
	unsigned char same;

	i = (unsigned char*)dst;
	j = (unsigned char*)src;
	same = (unsigned char)c;
	while (n-- > 0)
	{
		*i++ = *j++;
		if (*(i - 1) == same)
			return (i);
	}
	return (NULL);
}
