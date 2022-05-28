/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_bns.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:25:01 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/27 16:25:54 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	execute_instruction(t_tab *tab, char *arg)
{
	if (ft_strcmp(arg, "sa") == 0)
		ft_sa(tab, 0);
	else if (ft_strcmp(arg, "sb ") == 0)
		ft_sb(tab, 0);
	else if (ft_strcmp(arg, "ss\n") == 0)
		ft_ss(tab);
	else if (ft_strcmp(arg, "pa\n") == 0)
		ft_pa(tab, 0);
	else if (ft_strcmp(arg, "pb") == 0)
		ft_pb(tab, 0);
	else if (ft_strcmp(arg, "ra") == 0)
		ft_ra(tab, 0);
	else if (ft_strcmp(arg, "rb") == 0)
		ft_rb(tab, 0);
	else if (ft_strcmp(arg, "rr") == 0)
		ft_rr(tab);
	else if (ft_strcmp(arg, "rra") == 0)
		ft_rra(tab, 0);
	else if (ft_strcmp(arg, "rrb") == 0)
		ft_rrb(tab, 0);
	else if (ft_strcmp(arg, "rrr") == 0)
		ft_rrr(tab);
	else
		ft_erreur ();
}
