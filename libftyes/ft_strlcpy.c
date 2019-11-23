/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:38:20 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:30:08 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	char		*e;
	const char	*s;

	d = dst;
	e = dst + dstsize;
	s = src;
	if (!src)
		return (0);
	while (*s != '\0' && d < e)
		*d++ = *s++;
	if (d < e)
		*d = 0;
	else if (dstsize > 0)
		d[-1] = 0;
	while (*s != '\0')
		s++;
	return (s - src);
}
