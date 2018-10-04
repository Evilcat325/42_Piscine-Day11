/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:36:24 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 21:42:45 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	dummyhead;
	t_list	*prev;

	dummyhead.next = *begin_list;
	prev = &dummyhead;
	if (!begin_list)
		return ;
	while (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
			prev->next = (*begin_list)->next;
		else
			prev = (*begin_list);
		(*begin_list) = (*begin_list)->next;
	}
	(*begin_list) = dummyhead.next;
}
