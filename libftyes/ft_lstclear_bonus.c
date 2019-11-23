/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 12:50:44 by jperez-s          #+#    #+#             */
/*   Updated: 2019/11/23 12:25:49 by jperez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *list;
	t_list *temp;

	list = *lst;
	while (list)
	{
		temp = list;
		del(list->content);
		list = list->next;
		free(temp);
	}
	*lst = NULL;
}
