/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deux_instruction_bns.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:18:52 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/26 20:19:14 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_ss(t_tab *tab)
{
	ft_sa(tab, 0);
	ft_sb(tab, 0);
	write(1, "ss\n", 3);
}

void	ft_rr(t_tab *tab)
{
	ft_ra(tab, 0);
	ft_rb(tab, 0);
	write(1, "rr\n", 3);
}

void	ft_rrr(t_tab *tab)
{
	ft_rra(tab, 0);
	ft_rrb(tab, 0);
	write(1, "rrr\n", 3);
}
