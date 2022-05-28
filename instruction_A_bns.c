/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction_A_bns.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:16:23 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/26 20:17:38 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_sa(t_tab *tab, int j)
{
	int	tmp;

	if (tab->last_a < 1)
		return ;
	tmp = tab->tab_a[tab->head_a];
	tab->tab_a[tab->head_a] = tab->tab_a[tab->head_a + 1];
	tab->tab_a[tab->head_a + 1] = tmp;
	if (j == 1)
		write(1, "sa\n", 3);
}

void	ft_pa(t_tab *tab, int j)
{
	int	i;

	tab->last_a++;
	i = tab->last_a;
	while (i > 0)
	{
		tab->tab_a[i] = tab->tab_a[i - 1];
		i--;
	}
	tab->tab_a[0] = tab->tab_b[tab->head_b];
	tab->head_b++;
	tab->size_a++;
	tab->size_b--;
	if (j == 1)
		write(1, "pa\n", 3);
}

void	ft_ra(t_tab *tab, int j)
{
	int	tmp;
	int	i;

	i = tab->head_a;
	tmp = tab->tab_a[tab->head_a];
	while (i < tab->last_a)
	{
		tab->tab_a[i] = tab->tab_a[i + 1];
		i++;
	}
	tab->tab_a[tab->last_a] = tmp;
	if (j == 1)
		write(1, "ra\n", 3);
}

void	ft_rra(t_tab *tab, int j)
{
	int	tmp;
	int	i;

	tmp = tab->tab_a[tab->last_a];
	i = tab->last_a;
	while (i > 0)
	{
		tab->tab_a[i] = tab->tab_a[i - 1];
		i--;
	}
	tab->tab_a[tab->head_a] = tmp;
	if (j)
		write(1, "rra\n", 4);
}
