/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:34:46 by adiogo-f          #+#    #+#             */
/*   Updated: 2025/11/04 18:14:46 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*cpstr;

	i = 0;
	while (s[i])
		i++;
	cpstr = malloc(sizeof(*cpstr) * (i + 1));
	if (cpstr == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		cpstr[i] = s[i];
		i++;
	}
	cpstr[i] = '\0';
	return (cpstr);
}
