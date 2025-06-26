/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:44:01 by jalin             #+#    #+#             */
/*   Updated: 2025/06/23 15:20:13 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, world!";

    printf("Last 'o': %s\n", ft_strrchr(str, 'o'));    // orld!
    printf("Last 'H': %s\n", ft_strrchr(str, 'H'));    // Hello, world!
    printf("Last '!': %s\n", ft_strrchr(str, '!'));    // !
    printf("Last '\\0': %s\n", ft_strrchr(str, '\0')); // (empty string)
    printf("Last 'x': %s\n", ft_strrchr(str, 'x'));    // (null)

    return 0;
}
*/
