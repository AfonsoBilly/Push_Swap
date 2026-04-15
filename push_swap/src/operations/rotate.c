/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:22:02 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/15 15:22:03 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	rotate_up(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = stack_last(*stack);
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ra(t_stack **a)
{
	rotate_up(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	rotate_up(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate_up(a);
	rotate_up(b);
	write(1, "rr\n", 3);
}
