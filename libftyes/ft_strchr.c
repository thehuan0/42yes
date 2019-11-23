/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:38:50 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:29:39 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char *i;
	char same;

	i = (char*)s;
	same = (char)c;
	while (*i && *i != same)
		i++;
	if (*i == same)
		return (i);
	else
		return (NULL);
}
