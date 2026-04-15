/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:22:26 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/15 15:22:27 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*init_stack_a(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*new;
	int		i;
	int		num;

	a = NULL;
	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		new = creat_stack(num);
		if (!new)
		{
			stack_clear(&a);
			error_exit();
		}
		add_last(&a, new);
		i++;
	}
	return (a);
}
