# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 16:03:01 by adiogo-f          #+#    #+#              #
#    Updated: 2026/04/22 23:17:08 by adiogo-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
BONUS		= checker
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRCS		= srcs/main.c \
			  srcs/error.c \
			  srcs/parsing.c \
			  srcs/init.c \
			  srcs/utils/utils.c \
			  srcs/utils/stack_utils.c \
			  srcs/operations/swap.c \
			  srcs/operations/push.c \
			  srcs/operations/rotate.c \
			  srcs/operations/reverse_rotate.c \
			  srcs/algorithm/sort_small.c \
			  srcs/algorithm/sort_medium.c \
			  srcs/algorithm/sort_large.c

OBJS		= $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C $(LIBFT_DIR)
	$(RM) $(OBJS)

fclean: clean
	@make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
