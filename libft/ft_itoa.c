/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:44:01 by jalin             #+#    #+#             */
/*   Updated: 2025/06/20 13:25:11 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	long	num;
	int		len;

	num = n;
	len = 0;
	if (num < 0)
		len = 1;
	else
		len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	num;

	num = n;
	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len = len - 1;
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[len] = (num % 10) + '0';
		len--;
		num /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
#include <limits.h> // for INT_MIN and INT_MAX

char *ft_itoa(int n); // declare your function

int main(void)
{
	printf("ft_itoa(0)           = %s\n", ft_itoa(0));
	printf("ft_itoa(42)          = %s\n", ft_itoa(42));
	printf("ft_itoa(-42)         = %s\n", ft_itoa(-42));
	printf("ft_itoa(123456)      = %s\n", ft_itoa(123456));
	printf("ft_itoa(-987654321)  = %s\n", ft_itoa(-987654321));
	printf("ft_itoa(INT_MAX)     = %s\n", ft_itoa(INT_MAX));
	printf("ft_itoa(INT_MIN)     = %s\n", ft_itoa(INT_MIN));

	return 0;
}
*/
