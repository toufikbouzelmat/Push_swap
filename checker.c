/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:13:58 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/27 16:26:01 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	init(t_tab *tab, int size)
{
	tab->tab_a = (int *) malloc(sizeof(int) * size);
	tab->tab_b = (int *) malloc(sizeof(int) * size);
	tab->tab_s = (int *) malloc(sizeof(int) * size);
	tab->head_a = 0;
	tab->head_b = size;
	tab->last_a = size - 1;
	tab->last_b = size - 1;
	tab->size_a = tab->size;
	tab->size_b = 0;
}

static void	read_arguments(t_tab *tab)
{
	char	*arg;

	arg = get_next_line(0);
	while (arg)
	{
		execute_instruction(tab, arg);
		free(arg);
		arg = get_next_line(0);
	}
	free(arg);
}

int	ft_check_sort(t_tab *tab)
{
	int	i;

	i = 0;
	while (i < tab->size)
	{
		if (tab->tab_a[tab->head_a] < tab->tab_a[tab->head_a + 1])
			i++;
		else
			return (0);
	}
	return (1);
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
	read_arguments(&tab);
	if (ft_check_sort(&tab) == 1)
		write(1, "OK\n", 3);
	else if (ft_check_sort(&tab) == 0)
		write(1, "KO\n", 3);
	return (0);
}
