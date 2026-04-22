/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:22:26 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/22 23:17:24 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*init_stack_a(char **args, int count)
{
	t_stack	*a;
	t_stack	*new;
	int		i;
	int		num;

	a = NULL;
	i = 0;
	while (i < count)
	{
		num = ft_atoi(args[i]);
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
