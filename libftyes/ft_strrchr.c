/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:39:08 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:30:35 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	char *i;

	i = (char*)s + ft_strlen(s);
	while (*i != c)
	{
		if (i == s)
			return (0);
		i--;
	}
	return (i);
}
