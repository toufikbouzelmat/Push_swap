/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:58:34 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/27 21:57:25 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *str)
{
	int		i;
	int		s;
	long	nbr;

	i = 0;
	s = 1;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-' )
			s = s * (-1);
		if (str[i + 1] == '-' || str[i + 1] == '+' )
			ft_erreur();
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - 48);
		i++;
		if (nbr * s > INT_MAX || nbr * s < INT_MIN)
			ft_erreur();
	}
	free(str);
	return (nbr * s);
}

void	ft_pass_arg(int ac, char **av, t_tab *stack_a)
{
	int		j;
	int		*tab;
	char	*buff;
	char	**s;
	int		c;

	tab = (int *)malloc((ac - 1) * sizeof(int));
	buff = ft_strdup("");
	s = NULL;
	j = 1;
	while (ac > 1 && av[j] != NULL)
	{
		buff = ft_strjoin(buff, av[j++]);
		buff = ft_strjoin(buff, " ");
	}
	s = ft_split(buff, ' ');
	j = 0;
	while (s[j] != '\0')
	{
		tab[j] = ft_atoi(s[j]);
		j++;
	}
	free(s);
	j = 0;
	c = 0;
	while (j < stack_a->size)
		stack_a->tab_a[c++] = tab[j++];
	free (tab);
	free(buff);
}

void	ft_check_nbr(t_tab *tab)
{
	int	i;
	int	j;

	i = 0;
	while (i < tab->size)
	{
		j = i + 1;
		while (j < tab->size)
		{
			if (tab->tab_a[i] == tab->tab_a[j])
				ft_erreur();
			j++;
		}
		i++;
	}
}

void	ft_erreur(void)
{
	write(1, "erreur\n", 7);
	exit (0);
}
