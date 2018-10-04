/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:47:32 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 22:15:22 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ftx_swap(t_list **prev, t_list **head, t_list **next, int *updated)
{
	(*prev)->next = (*head)->next;
	(*next) = (*head)->next;
	(*head)->next = (*head)->next->next;
	(*next)->next = (*head);
	*updated = 1;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	dummyhead;
	t_list	*prev;
	t_list	*head;
	t_list	*next;
	int		updated;

	if (!*begin_list)
		return ;
	updated = 1;
	while (updated)
	{
		prev = &dummyhead;
		dummyhead.next = *begin_list;
		head = *begin_list;
		updated = 0;
		while (head->next)
		{
			if (cmp(head->data, head->next->data) > 0)
				ftx_swap(&prev, &head, &next, &updated);
			else
				head = head->next;
			prev = prev->next;
		}
		*begin_list = dummyhead.next;
	}
}
