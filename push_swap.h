/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:23:35 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/28 16:30:49 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdbool.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int				number;
	int				index;
	struct s_stack	*next;
}					t_stack;

t_stack	*creat_stack(int number);
void	add_first(t_stack **stack, t_stack *new);
int		stack_len(t_stack *stack);
t_stack	*stack_last(t_stack *stack);
void	add_last(t_stack **stack, t_stack *new);
void	stack_clear(t_stack **stack);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	error_exit(void);
void	validate_args(char **args, int count);
t_stack	*init_stack_a(char **args, int count);

int		is_sorted(t_stack *stack);
int		find_min(t_stack *stack);
int		find_max(t_stack *stack);
int		find_position(t_stack *stack, int value);

void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);
void	sort_large(t_stack **a, t_stack **b);

void	free_split(char **split);
void	sort(t_stack **a, t_stack **b, int size);

#endif
