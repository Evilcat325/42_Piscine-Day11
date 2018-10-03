/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:43:00 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 15:58:06 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (head == 0)
		return ;
	head->data = data;
	head->next = *begin_list;
	begin_list = &head;
}
