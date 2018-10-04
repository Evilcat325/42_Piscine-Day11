/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 22:11:36 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 22:29:12 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		size;

	if (!begin_list)
		return (0);
	size = 1;
	while (begin_list->next)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		i;
	int		j;
	int		size;
	t_list	*end;
	void	*tmp;

	i = 0;
	size = ft_list_size(begin_list);
	while (i < size / 2)
	{
		j = size - i * 2;
		end = begin_list;
		while (--j > 0)
			end = end->next;
		tmp = begin_list->data;
		begin_list->data = end->data;
		end->data = tmp;
		begin_list = begin_list->next;
		i++;
	}
}
