/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:59:59 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 20:15:16 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*head;

	head = ft_create_elem(data);
	if (head == 0 || !begin_list)
		return ;
	if (!*begin_list)
		head->next = 0;
	else
		head->next = *begin_list;
	*begin_list = head;
}
