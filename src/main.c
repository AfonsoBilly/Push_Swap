/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 23:16:57 by adiogo-f          #+#    #+#             */
/*   Updated: 2026/04/28 16:28:09 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	count_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		i++;
	return (i);
}

static int	count_total(int argc, char **argv)
{
	char	**split;
	int		total;
	int		i;

	total = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			error_exit();
		total += count_split(split);
		free_split(split);
		i++;
	}
	return (total);
}

static char	**join_args(int argc, char **argv, int total)
{
	char	**args;
	char	**split;
	int		i;
	int		j;
	int		k;

	args = malloc(sizeof(char *) * (total + 1));
	if (!args)
		error_exit();
	k = 0;
	i = 1;
	while (i < argc)
	{
		split = ft_split(argv[i], ' ');
		j = 0;
		while (split[j])
			args[k++] = split[j++];
		free(split);
		i++;
	}
	args[k] = NULL;
	return (args);
}

static char	**get_args(int argc, char **argv, int *count)
{
	char	**args;
	int		total;

	if (argc == 1)
		exit(0);
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		total = count_total(argc, argv);
		args = join_args(argc, argv, total);
	}
	if (!args)
		error_exit();
	*count = count_split(args);
	if (!*count)
	{
		free_split(args);
		error_exit();
	}
	return (args);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	char	**args;
	int		count;

	args = get_args(argc, argv, &count);
	validate_args(args, count);
	a = init_stack_a(args, count);
	free_split(args);
	b = NULL;
	if (is_sorted(a))
	{
		stack_clear(&a);
		return (0);
	}
	sort(&a, &b, stack_len(a));
	stack_clear(&a);
	stack_clear(&b);
	return (0);
}
