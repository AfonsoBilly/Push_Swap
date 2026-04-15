/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:21:22 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/15 15:21:25 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	get_max_bits(t_stack *stack)
{
	int		max_index;
	int		bits;
	t_stack	*current;

	max_index = 0;
	current = stack;
	while (current)
	{
		if (current->index > max_index)
			max_index = current->index;
		current = current->next;
	}
	bits = 0;
	while ((max_index >> bits) != 0)
		bits++;
	return (bits);
}

static void	index_stack(t_stack *stack)
{
	t_stack	*current;
	t_stack	*compare;
	int		index;

	current = stack;
	while (current)
	{
		index = 0;
		compare = stack;
		while (compare)
		{
			if (current->number > compare->number)
				index++;
			compare = compare->next;
		}
		current->index = index;
		current = current->next;
	}
}

void	sort_large(t_stack **a, t_stack **b)
{
	int	max_bits;
	int	size;
	int	i;
	int	j;

	index_stack(*a);
	max_bits = get_max_bits(*a);
	size = stack_len(*a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
