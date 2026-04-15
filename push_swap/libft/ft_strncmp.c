/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:10:06 by adiogo-f          #+#    #+#             */
/*   Updated: 2025/11/07 19:18:31 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!s1 && !s2)
	{
		return ((s1 == NULL) - (s2 == NULL));
	}
	i = 0;
	while (i < n)
	{
		if ((unsigned const char)s1[i] != (unsigned const char)s2[i])
			return ((unsigned const char)s1[i] - (unsigned const char)s2[i]);
		if ((unsigned const char)s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
