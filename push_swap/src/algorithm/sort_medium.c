/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:21:28 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/15 15:21:30 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	move_min_to_top(t_stack **a)
{
	int	min;
	int	pos;
	int	size;

	min = find_min(*a);
	pos = find_position(*a, min);
	size = stack_len(*a);
	if (pos <= size / 2)
	{
		while ((*a)->number != min)
			ra(a);
	}
	else
	{
		while ((*a)->number != min)
			rra(a);
	}
}

void	sort_four(t_stack **a, t_stack **b)
{
	move_min_to_top(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	move_min_to_top(a);
	pb(a, b);
	move_min_to_top(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}
