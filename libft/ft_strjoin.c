/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:35:15 by adiogo-f          #+#    #+#             */
/*   Updated: 2025/11/10 17:45:01 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	joined = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!joined)
		return (NULL);
	i = -1;
	while (++i < len_s1)
		joined[i] = s1[i];
	i = -1;
	while (++i < len_s2)
		joined[len_s1 + i] = s2[i];
	joined[len_s1 + len_s2] = '\0';
	return (joined);
}
/* int main(void)
{
    char *res = ft_strjoin("Hello, ", "world!");
    printf("%s\n", res);
} */
