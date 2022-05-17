/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 20:47:25 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/13 22:07:48 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lenght(char **av, int ac)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	k = 0;
	while (i < ac)
	{
		j = 0;
		if (av[i][j] == '\0')
			ft_erreur();
		while (av[i][j] != '\0')
		{
			if ((av[i][j] >= '0' && av[i][j] <= '9') &&
				(av[i][j + 1] == ' ' || av[i][j + 1] == '\0'))
				k++;
			else if (!(av[i][j] >= '0' && av[i][j] <= '9') &&
						av[i][j] != ' ' && av[i][j] != '+'
						&& av[i][j] != '-')
				ft_erreur();
			j++;
		}
		i++;
	}
	return (k);
}

void	check_empty_arg(char **tab)
{
	int		b;
	int		i;
	int		j;

	i = 1;
	while (tab[i])
	{
		b = 0;
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] >= '0' && tab[i][j] <= '9')
			{
				b = 1;
				break ;
			}
			j++;
		}
		if (!b)
			ft_erreur();
		i++;
	}
}
