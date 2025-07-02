/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:16:42 by jalin             #+#    #+#             */
/*   Updated: 2025/06/26 19:43:48 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;
	size_t				i;

	destination = dest;
	source = src;
	i = 0;
	if (destination < source)
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else if (destination > source)
	{
		i = n;
		while (i > 0)
		{
			destination[i - 1] = source[i -1];
			i--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char a1[20] = "abcdef";
    char a2[20] = "abcdef";

    memmove(a1 + 2, a1, 4);
    ft_memmove(a2 + 2, a2, 4);

    printf("Standard memmove: %s\n", a1);
    printf("Your ft_memmove: %s\n", a2);

    return 0;
}
*/
