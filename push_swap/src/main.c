/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:22:29 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/15 15:22:31 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		size;

	validate_args(argc, argv);
	a = init_stack_a(argc, argv);
	b = NULL;
	if (is_sorted(a))
	{
		stack_clear(&a);
		return (0);
	}
	size = stack_len(a);
	if (size == 2)
		sort_two(&a);
	else if (size == 3)
		sort_three(&a);
	else if (size == 4)
		sort_four(&a, &b);
	else if (size == 5)
		sort_five(&a, &b);
	else
		sort_large(&a, &b);
	stack_clear(&a);
	stack_clear(&b);
}
