/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_B_bns.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:16:39 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/26 20:17:25 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sb(t_tab *tab, int j)
{
	int	tmp;

	if (tab->head_b > tab->size - 2)
		return ;
	tmp = tab->tab_b[tab->head_b];
	tab->tab_b[tab->head_b] = tab->tab_b[tab->head_b + 1];
	tab->tab_b[tab->head_b + 1] = tmp;
	if (j)
		write(1, "sb\n", 3);
}

void	ft_pb(t_tab *tab, int j)
{
	int	i;

	i = 0;
	tab->head_b--;
	tab->tab_b[tab->head_b] = tab->tab_a[tab->head_a];
	while (i < tab->last_a)
	{
		tab->tab_a[i] = tab->tab_a[i + 1];
		i++;
	}
	tab->last_a--;
	if (j)
		write(1, "pb\n", 3);
	tab->size_a--;
	tab->size_b++;
}

void	ft_rb(t_tab *tab, int j)
{
	int	tmp;
	int	i;

	i = tab->head_b;
	tmp = tab->tab_b[tab->head_b];
	while (i < tab->last_b)
	{
		tab->tab_b[i] = tab->tab_b[i + 1];
		i++;
	}
	tab->tab_b[tab->last_b] = tmp;
	if (j)
		write(1, "rb\n", 3);
}

void	ft_rrb(t_tab *tab, int j)
{
	int	tmp;
	int	i;

	tmp = tab->tab_b[tab->last_b];
	i = tab->last_b;
	while (i > 0)
	{
		tab->tab_b[i] = tab->tab_b[i - 1];
		i--;
	}
	tab->tab_b[tab->head_b] = tmp;
	if (j)
		write(1, "rrb\n", 4);
}
