/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:35:07 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 16:40:01 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*head;
	t_list	*push;

	i = 0;
	head = 0;
	while (i < ac)
	{
		push = ft_create_elem(av[ac]);
		push->next = head;
		head = push;
		i++;
	}
	return (head);
}
