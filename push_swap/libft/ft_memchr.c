/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:41:35 by adiogo-f          #+#    #+#             */
/*   Updated: 2025/11/04 17:26:44 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		target;
	size_t				i;

	str = (const unsigned char *)s;
	target = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == target)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
