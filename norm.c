/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:45:36 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/27 16:18:52 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_conti2_(t_tab *tab)
{
	while (tab->tab_b[tab->head_b] != tab->tab_a[tab->head_a] - 1)
	{
		if ((tab->tab_a[tab->head_a] < tab->tab_a[tab->last_a]
				|| tab->tab_a[tab->last_a] < tab->tab_b[tab->head_b]))
		{
			ft_pa(tab, 1);
			ft_ra(tab, 1);
		}
		ft_rrb(tab, 1);
	}
	ft_pa(tab, 1);
}

void	ft_contiunueee_algo(t_tab *tab, int index)
{
	while (tab->size_b)
	{
		index = find_val_b(tab->tab_a[tab->head_a] - 1, tab);
		if (index <= tab->size_b / 2)
		{
			while (tab->tab_b[tab->head_b] != tab->tab_a[tab->head_a] - 1)
			{
				ft_rb(tab, 1);
			}
			ft_pa(tab, 1);
		}
		else
		{
			ft_conti2_(tab);
		}
		while (tab->tab_a[tab->head_a] - 1 == tab->tab_a[tab->last_a])
			ft_rra(tab, 1);
	}	
}
