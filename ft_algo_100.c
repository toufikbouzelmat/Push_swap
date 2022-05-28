/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 00:02:26 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/27 16:23:22 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stcpy(t_tab *tab)
{
	int	i;

	i = 0;
	while (i <= tab->last_a)
	{
		tab->tab_s[i] = tab->tab_a[i];
		i++;
	}
}

void	ft_sort_s(t_tab *tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < tab->size)
	{
		tab->tab_s[i] = 0;
		j = 0;
		while (j < i)
		{
			if (tab->tab_a[i] > tab->tab_a[j])
				tab->tab_s[i]++;
			else
				tab->tab_s[j]++;
			j++;
		}
		i++;
	}
}

int	find_val_b(int val, t_tab *tab)
{
	int	i;

	i = tab->head_b;
	while (i <= tab->last_b)
	{
		if (tab->tab_b[i] == val)
			return (i - tab->head_b);
		i++;
	}
	return (0);
}

void	ft_act_inst(t_tab *tab, int min, int avg)
{
	while (tab->size_b <= min + avg)
	{
		if (tab->tab_a[tab->head_a] <= avg + min)
			ft_pb(tab, 1);
		else if (tab->tab_b[tab->head_b] >= min
			&& tab->tab_b[tab->head_b] <= min + avg / 2)
			ft_rr(tab);
		else
			ft_ra(tab, 1);
		if (tab->tab_b[tab->head_b] >= min
			&& tab->tab_b[tab->head_b] <= min + avg / 2)
			ft_rb(tab, 1);
	}
}

void	ft_algo_100(t_tab *tab, int k)
{
	int	min;
	int	avg;
	int	index;

	min = 0;
	avg = tab->last_a / k;
	index = 0;
	while (tab->size_a > 3)
	{
		ft_act_inst(tab, min, avg);
		min += avg;
		avg = tab->last_a / k;
		if (k > 3)
			k--;
		if (avg < 5)
			avg = tab->size_a - 3;
	}	
	ft_algo_sort_tree(tab);
	ft_contiunueee_algo(tab, index);
}
