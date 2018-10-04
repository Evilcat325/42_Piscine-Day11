/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:43:00 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 19:56:03 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*head;
	t_list	*end;

	end = malloc(sizeof(t_list));
	if (end == 0 || !begin_list)
		return ;
	end->data = data;
	end->next = 0;
	if (!*begin_list)
		*begin_list = end;
	else
	{
		head = *begin_list;
		while (head->next)
			head = head->next;
		head->next = end;
	}
}
