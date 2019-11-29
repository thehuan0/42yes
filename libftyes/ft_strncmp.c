/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 10:39:36 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/29 13:13:58 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t l;

	if (n == 0)
		return (0);
	l = 0;
	while (s1[l] != '\0' && s2[l] != '\0' && s1[l] == s2[l] && l < n - 1)
	{
		l++;
	}
	return ((unsigned char)s1[l] - (unsigned char)s2[l]);
}
