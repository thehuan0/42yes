/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:04:07 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/29 12:47:57 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *i;

	i = (unsigned char*)s;
	while (n > 0)
	{
		if (*i == (unsigned char)c)
			return (i);
		i++;
		n--;
	}
	return (NULL);
}
