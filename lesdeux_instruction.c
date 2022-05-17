/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lesdesux_instruction.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:52:48 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/16 14:53:30 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
