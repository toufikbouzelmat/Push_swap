# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 22:42:24 by tbouzalm          #+#    #+#              #
#    Updated: 2022/05/27 16:26:51 by tbouzalm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS = checker

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEAD = ./push_swap.h 

HEAD_BNS = ./checker.h


SRC = push_swap.c check_arg.c ft_strjoin.c ft_strdup.c ft_split.c check_av2.c algo1.c \
		lesdeux_instruction.c \
		instruction_a.c \
		instruction_b.c \
		get_min_max_A_B.c \
		ft_algo_100.c \
		norm.c \

SRC_BNS = checker.c \
			check_bns.c \
			check_arg_bns.c \
			ft_split_bns.c \
			ft_strdup_bns.c \
			get_min_max_bns.c \
			instruction_A_bns.c \
			instruction_B_bns.c \
			deux_instruction_bns.c \
			get_next_line.c \
			get_next_line_utils.c \
			algo1_bns.c \
			norm_bns.c \
			
		

OBJ = ${SRC:.c=.o}

OBJ_BNS = ${SRC_BNS:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus : $(OBJ_BNS)
		$(CC) $(CFLAGS) $(OBJ_BNS) -o $(BONUS)

$(OBJ): $(HEAD)

$(OBJ_BNS): $(HEAD_BNS)

clean: 
		rm -f $(OBJ)
		rm -f $(OBJ_BNS)

fclean: clean
		rm -f $(NAME)
		rm -f $(BONUS)

re: fclean all

