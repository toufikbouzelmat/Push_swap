/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:14:14 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/27 21:35:03 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <libc.h>
# include <limits.h>

typedef struct s_tab
{
	int	*tab_a;
	int	*tab_b;
	int	*tab_s;
	int	head_a;
	int	head_b;
	int	last_a;
	int	last_b;
	int	size;
	int	size_b;
	int	size_a;
}	t_tab;

int		ft_atoi(char *str);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(char *s, char c);
char	*ft_strdup(const char	*s1);
char	*ft_strjoin(char *s1, char *s2);
void	init(t_tab *tab, int ac);
void	ft_pass_arg(int ac, char **av, t_tab *tab);
void	ft_erreur(void);
void	ft_sa(t_tab *tab, int j);
void	ft_sb(t_tab *tab, int j);
void	ft_pb(t_tab *tab, int j);
void	ft_pa(t_tab *tab, int j);
void	ft_ra(t_tab *tab, int j);
void	ft_rb(t_tab *tab, int j);
void	ft_rra(t_tab *tab, int j);
void	ft_rrb(t_tab *tab, int j);
void	ft_ss(t_tab *tab);
void	ft_rr(t_tab *tab);
void	ft_rrr(t_tab *tab);
int		lenght(char **av, int ac);
void	ft_check_nbr(t_tab *tab);
void	check_empty_arg(char **tab);
void	ft_algo_sort_tree(t_tab *tab);
void	ft_algo_sort_five(t_tab *tab);
int		get_min(t_tab *tab);
int		get_max(t_tab *tab);
void	ft_algo_100(t_tab *tab, int k);
void	ft_sort_s(t_tab *tab);
void	ft_stcpy(t_tab *tab);
int		find_val_b(int val, t_tab *tab);
void	ft_contiunueee_algo(t_tab *tab, int index);
void	ft_conti2_(t_tab *tab);
void	ft_act_inst(t_tab *tab, int min, int avg);
#endif
