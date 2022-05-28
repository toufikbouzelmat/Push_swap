/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 13:13:08 by tbouzalm          #+#    #+#             */
/*   Updated: 2022/05/26 20:13:25 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "./push_swap.h"
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

void	execute_instruction(t_tab *tab, char *arg);
int		ft_strcmp(char *s1, char *s2);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*read_buff_size(int fd, char *lines);
char	*one_line(char *lines);
char	*lines_rest(char *file_line);
char	*get_next_line(int fd);
void	ft_pass_arg(int ac, char **av, t_tab *stack_a);
int		lenght(char **av, int ac);
void	check_empty_arg(char **tab);
int		ft_atoi(const	char *str);
void	ft_pass_arg(int ac, char **av, t_tab *stack_a);
void	ft_check_nbr(t_tab *tab);
void	ft_erreur(void);
#endif