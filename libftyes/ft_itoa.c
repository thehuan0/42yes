/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 17:03:29 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 16:52:21 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static void		isneg(int *nb, int *neg)
{
	if (*nb < 0)
	{
		*nb *= -1;
		*neg = 1;
	}
}

char			*ft_itoa(int nb)
{
	char	*str;
	int		n;
	int		len;
	int		neg;

	n = nb;
	len = 2;
	neg = 0;
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	isneg(&nb, &neg);
	while (n /= 10)
		len++;
	len += neg;
	if (!(str = (char*)malloc(len)))
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
