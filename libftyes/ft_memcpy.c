/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:46:26 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:28:33 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *i;
	unsigned char *j;

	i = (unsigned char*)dst;
	j = (unsigned char*)src;
	if (i == 0 && j == 0)
		return (NULL);
	while (n-- > 0)
		*i++ = *j++;
	return (dst);
}
