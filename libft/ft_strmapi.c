/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:28:20 by adiogo-f          #+#    #+#             */
/*   Updated: 2025/11/12 17:52:05 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	mapi = malloc(sizeof(char) * (len + 1));
	if (!mapi)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapi[i] = f(i, s [i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
/* char	f(unsigned int i, char str)
{
	if (str >= 'a' && str <= 'z')
		str -= 32;
	return (str);
}
int	main()
{
	char	*str = "olamundo";
	printf("%s", ft_strmapi(str, f));
} */
