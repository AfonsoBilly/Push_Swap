/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiogo-f <adiogo-f@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:50:11 by adiogo-f          #+#    #+#             */
/*   Updated: 2025/11/10 17:44:01 by adiogo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	num;

	num = n;
	i = count_digits(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		i--;
		str[i] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
/* int main(void)
{
    char *result;
    result = ft_itoa(-2147483648);
    printf("ft_itoa: %s\n", result);
    char *result1;
    result1 = itoa(-2147483648);
    printf("itoa: %s\n", result1);
} */
