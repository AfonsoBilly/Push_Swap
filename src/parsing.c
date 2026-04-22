/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 15:22:34 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/22 23:17:03 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <limits.h>

static int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static long	ft_atol(char *str)
{
	long	result;
	int		sign;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

static int	has_duplicates(char **args, int count)
{
	int	i;
	int	j;
	int	num1;
	int	num2;

	i = 0;
	while (i < count)
	{
		num1 = ft_atol(args[i]);
		j = i + 1;
		while (j < count)
		{
			num2 = ft_atol(args[j]);
			if (num1 == num2)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	validate_args(char **args, int count)
{
	int		i;
	long	num;

	i = 0;
	while (i < count)
	{
		if (!is_number(args[i]))
			error_exit();
		num = ft_atol(args[i]);
		if (num > INT_MAX || num < INT_MIN)
			error_exit();
		i++;
	}
	if (has_duplicates(args, count))
		error_exit();
}
