/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 11:46:26 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/29 12:41:03 by jperez-s         ###   ########.fr       */
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
	if (i == NULL && j == NULL)
		return (NULL);
	while (n > 0)
	{
		*i++ = *j++;
		n--;
	}
	return (dst);
}
