/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:30:41 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 22:47:12 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	dummyhead;
	t_list	*next;

	dummyhead.next = *begin_list;
	(*begin_list) = &dummyhead;
	while (*begin_list)
	{
		if (cmp((*begin_list)->data, data) <= 0
			&& (!(*begin_list)->next
			|| cmp((*begin_list)->next->data, data) >= 0))
		{
			next = (*begin_list)->next;
			(*begin_list)->next = ft_create_elem(data);
			(*begin_list)->next->next = next;
			break ;
		}
		(*begin_list) = (*begin_list)->next;
	}
	*begin_list = dummyhead.next;
}
