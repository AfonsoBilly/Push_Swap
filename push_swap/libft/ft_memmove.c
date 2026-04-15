/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:31:57 by adiogo-f          #+#    #+#             */
/*   Updated: 2025/11/12 16:07:29 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest2;
	const char	*src2;
	size_t		i;

	dest2 = (char *)dst;
	src2 = (const char *)src;
	i = 0;
	if (dst == src || len == 0)
		return (dst);
	if (dest2 > src2)
	{
		while (len-- > 0)
			dest2[len] = src2[len];
	}
	else
	{
		while (i < len)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dst);
}
