/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:39:08 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/29 12:56:02 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	const char *last;

	last = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			last = s;
		s++;
	}
	if (last)
		return ((char*)last);
	if (c == '\0')
		return ((char*)s);
	return (NULL);
}
