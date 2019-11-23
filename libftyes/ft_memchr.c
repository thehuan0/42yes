/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 13:04:07 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:27:07 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *i;
	unsigned char same;

	i = (unsigned char*)s;
	same = (unsigned char)c;
	while (n-- > 0)
	{
		if (*i == same)
			return (i);
		i++;
	}
	return (NULL);
}
