/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 15:43:00 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 16:20:08 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*end;
	int		i;

	end = malloc(sizeof(t_list));
	if (end == 0)
		return ;
	end->data = data;
	end->next = 0;
	if (!begin_list)
		begin_list = &end;
	else
	{
		i = 0;
		while (begin_list[i]->next)
			i++;
		begin_list[i]->next = end;
	}
}
