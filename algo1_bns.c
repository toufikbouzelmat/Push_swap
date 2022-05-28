/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo1_bns.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:21:17 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/27 15:52:19 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_check_if_sorted(t_tab *tab)
{
	int	i;

	i = 0;
	while (i < tab->last_a)
	{
		if (tab->tab_a[i] > tab->tab_a[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_algo_sort_tree(t_tab *tab)
{
	while (ft_check_if_sorted(tab))
	{
		if (tab->tab_a[tab->head_a] > tab->tab_a[tab->head_a + 1]
			&& tab->tab_a[tab->head_a] > tab->tab_a[tab->head_a + 2])
			ft_ra(tab, 1);
		else if (tab->tab_a[tab->head_a] > tab->tab_a[tab->head_a + 1]
			&& tab->tab_a[tab->head_a] < tab->tab_a[tab->head_a + 2])
			ft_sa(tab, 1);
		else if (tab->tab_a[tab->head_a + 2] < tab->tab_a[tab->head_a + 1]
			&& tab->tab_a[tab->head_a + 2] < tab->tab_a[tab->head_a])
			ft_rra(tab, 1);
		else
			ft_sa(tab, 1);
	}
}

void	push_two_ele_stack_b(t_tab *tab)
{
	int	max;
	int	min;
	int	i;

	i = 0;
	max = get_max(tab);
	min = get_min(tab);
	while (tab->last_a)
	{
		if (tab->tab_a[tab->head_a] == max || tab->tab_a[tab->head_a] == min)
		{
			ft_pb(tab, 1);
			i++;
		}
		else
			ft_ra(tab, 0);
		if (i == 2)
			break ;
	}
}

void	ft_algo_sort_five(t_tab *tab)
{
	int	i;

	push_two_ele_stack_b(tab);
	ft_algo_sort_tree(tab);
	while (tab->head_b < tab->size)
	{
		if (tab->tab_b[tab->head_b] > tab->tab_a[tab->head_a])
		{
			ft_pa(tab, 1);
			ft_ra(tab, 1);
		}
		else
			ft_pa(tab, 1);
	}
	i = 0;
	while (i < tab->size)
	{
		printf("tab[%d] = %d\n", i, tab->tab_a[i]);
		i++;
	}
}
