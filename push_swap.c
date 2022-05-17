/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:17:33 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/17 23:10:23 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_tab *tab, int size)
{
	tab->tab_a = (int *) malloc(sizeof(int) * size);
	tab->tab_b = (int *) malloc(sizeof(int) * size);
	tab->head_a = 0;
	tab->head_b = size;
	tab->last_a = size - 1;
	tab->last_b = size - 1;
	tab->index = 0;
}

int	main(int ac, char **av)
{
	t_tab	tab;

	if (ac <= 1)
		exit (0);
	tab.size = lenght(av, ac);
	init(&tab, tab.size);
	check_empty_arg(av);
	ft_pass_arg(ac, av, &tab);
	ft_check_nbr(&tab);
	if (tab.size == 3)
		ft_algo_sort_tree(&tab);
	if (tab.size == 5)
		ft_algo_sort_five(&tab);
	return (0);
}
