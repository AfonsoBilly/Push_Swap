# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adiogo-f <adiogo-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/15 16:03:01 by adiogo-f          #+#    #+#              #
#    Updated: 2026/04/28 16:29:29 by adiogo-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
BONUS		= checker
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

src		= src/main.c \
			  src/error.c \
			  src/parsing.c \
			  src/init.c \
			  src/utils/utils.c \
			  src/utils/util.c \
			  src/utils/stack_utils.c \
			  src/operations/swap.c \
			  src/operations/push.c \
			  src/operations/rotate.c \
			  src/operations/reverse_rotate.c \
			  src/algorithm/sort_small.c \
			  src/algorithm/sort_medium.c \
			  src/algorithm/sort_large.c

OBJS		= $(src:.c=.o)

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
