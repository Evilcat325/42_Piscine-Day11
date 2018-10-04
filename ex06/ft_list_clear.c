/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 20:30:55 by seli              #+#    #+#             */
/*   Updated: 2018/10/03 21:02:48 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*next;

	if (!*begin_list)
		return ;
	while ((*begin_list)->next)
	{
		next = (*begin_list)->next;
		free((*begin_list));
		(*begin_list) = next;
	}
	(*begin_list) = 0;
}
