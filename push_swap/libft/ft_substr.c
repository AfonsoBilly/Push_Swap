/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:39:18 by adiogo-f          #+#    #+#             */
/*   Updated: 2025/11/10 17:47:18 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	actual_len;
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	actual_len = s_len - start;
	if (actual_len > len)
		actual_len = len;
	substr = malloc(sizeof(char) * (actual_len + 1));
	if (!substr)
		return (NULL);
	i = -1;
	while (++i < actual_len)
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}
/*  int main(void)
{
    char *s = "Hello, World!";
    char *sub = ft_substr(s, 2, 3);
    printf("%s\n", sub);
}  */
