/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:13:51 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/15 16:13:52 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	is_sorted(t_stack *stack)
{
	while (stack && stack->next)
	{
		if (stack->number > stack->next->number)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	find_min(t_stack *stack)
{
	int	min;

	if (!stack)
		return (0);
	min = stack->number;
	while (stack)
	{
		if (stack->number < min)
			min = stack->number;
		stack = stack->next;
	}
	return (min);
}

int	find_max(t_stack *stack)
{
	int	max;

	if (!stack)
		return (0);
	max = stack->number;
	while (stack)
	{
		if (stack->number > max)
			max = stack->number;
		stack = stack->next;
	}
	return (max);
}

int	find_position(t_stack *stack, int value)
{
	int	i;

	i = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		if (stack->number == value)
			return (i);
		i++;
		stack = stack->next;
	}
	return (-1);
}

void	stack_clear(t_stack **stack)
{
	t_stack	*temp;

	if (!stack)
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
}
