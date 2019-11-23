/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 17:24:47 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:25:15 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char			*str;
	unsigned char	*i;
	size_t			sze;

	str = malloc(count * size);
	i = (unsigned char*)str;
	sze = count * size;
	if (str == 0)
		return (str);
	while (sze-- > 0)
		*i++ = '\0';
	return (str);
}
