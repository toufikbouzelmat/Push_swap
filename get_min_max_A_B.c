/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_max_A_B.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:17:38 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/17 23:18:16 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_tab *tab)
{
	int	i;
	int	max;

	i = 1;
	max = tab->tab_a[0];
	while (i < tab->size)
	{
		if (tab->tab_a[i] > max)
			max = tab->tab_a[i];
		i++;
	}
	return (max);
}

int	get_min(t_tab *tab)
{
	int	i;
	int	min;

	i = 1;
	min = tab->tab_a[0];
	while (i < tab->size)
	{
		if (tab->tab_a[i] < min)
			min = tab->tab_a[i];
		i++;
	}
	return (min);
}
