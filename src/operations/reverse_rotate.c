/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:21:57 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/22 23:17:56 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	reverse_rotate_down(t_stack **stack)
{
	t_stack	*last;
	t_stack	*second_last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = stack_last(*stack);
	second_last = *stack;
	while (second_last->next->next != NULL)
		second_last = second_last->next;
	last->next = *stack;
	*stack = last;
	second_last->next = NULL;
}

void	rra(t_stack **a)
{
	reverse_rotate_down(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	reverse_rotate_down(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse_rotate_down(a);
	reverse_rotate_down(b);
	write(1, "rrr\n", 4);
}
