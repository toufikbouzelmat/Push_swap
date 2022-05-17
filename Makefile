# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 22:42:24 by tbouzalm          #+#    #+#              #
#    Updated: 2022/05/17 23:18:51 by tbouzalm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEAD = push_swap.h 

SRC = push_swap.c check_arg.c ft_strjoin.c ft_strdup.c ft_split.c check_av2.c algo1.c \
		lesdeux_instruction.c \
		instruction_a.c \
		instruction_b.c \
		get_min_max_A_B.c \

OBJ = ${SRC:.c=.o}

all: $(NAME) $(HEAD)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(HEAD)

clean: 
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

