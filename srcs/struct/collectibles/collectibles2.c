/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collectibles2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adu-pavi <adu-pavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 08:52:39 by adu-pavi          #+#    #+#             */
/*   Updated: 2021/10/18 08:52:40 by adu-pavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../so_long.h"

void	no_collectible(t_mem *mem, int found)
{
	if (found == 0)
	{
		ft_putstr_fd("Error.\nThere is no collectible !\n", 2);
		free_mem(mem);
	}
}

int	is_collectible(t_mem *mem, int i, int j)
{
	t_collectible_elem	*elem;

	elem = mem->c->first;
	while (elem)
	{
		if (elem->pos_x == i && elem->pos_y == j)
			return (SUCCESS);
		elem = elem->next;
	}
	return (ERROR);
}

void	set_to_true(t_mem *mem)
{
	t_collectible_elem	*elem;

	elem = mem->c->first;
	while (elem)
	{
		if (elem->pos_y == (int)mem->p->y && (int)elem->pos_x == mem->p->x)
		{
			elem->is_touched = true;
			return ;
		}
		elem = elem->next;
	}
}
