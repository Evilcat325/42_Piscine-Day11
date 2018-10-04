/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:48:37 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 23:18:20 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1,
							t_list *begin_list2, int (*cmp)())
{
	t_list	dummyhead;
	t_list	*prev;

	prev = &dummyhead;
	while (*begin_list1 && begin_list2)
	{
		if (cmp((*begin_list1)->data, begin_list2->data) <= 0)
		{
			prev->next = *begin_list1;
			(*begin_list1) = (*begin_list1)->next;
		}
		else
		{
			prev->next = begin_list2;
			begin_list2 = begin_list2->next;
		}
		prev = prev->next;
	}
	if (!*begin_list1)
		prev->next = begin_list2;
	else if (!begin_list2)
		prev->next = *begin_list1;
	*begin_list1 = dummyhead.next;
}
