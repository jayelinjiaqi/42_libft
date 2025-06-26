/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 13:28:32 by jalin             #+#    #+#             */
/*   Updated: 2025/06/20 15:06:16 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
#include <ctype.h>
#include <stdio.h>
void to_upper_even_index(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c = toupper(*c);
}

// Test in main
int main(void)
{
    char str[] = "42network";

    printf("Before: %s\n", str);
    ft_striteri(str, to_upper_even_index);
    printf("After : %s\n", str);

    return 0;
}
*/
