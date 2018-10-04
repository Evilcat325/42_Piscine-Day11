/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 21:43:13 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 21:47:08 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*head;

	if (!begin_list1 || !begin_list2)
		return ;
	if (!*begin_list1)
	{
		(*begin_list1) = begin_list2;
		return ;
	}
	head = *begin_list1;
	while (head)
	{
		if (head->next == (void *)0)
		{
			head->next = begin_list2;
			return ;
		}
		head = head->next;
	}
}
