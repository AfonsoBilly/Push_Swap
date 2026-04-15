/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:32:37 by adiogo-f          #+#    #+#             */
/*   Updated: 2025/11/10 19:42:41 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/* #include <stdio.h>

int main(void)
{
	char **res = ft_split("one two three", ' ');
	if (!res)
		return (1);
	printf("%s\n", res[0]);
	printf("%s\n", res[1]);
	printf("%s\n", res[2]);
	free(res[0]);
	free(res[1]);
	free(res[2]);
	free(res);
	return (0);
} */
