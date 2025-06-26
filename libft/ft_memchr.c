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

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*unsigned_s;
	size_t				i;

	unsigned_s = s;
	i = 0;
	while (i < n)
	{
		if (unsigned_s[i] == (unsigned char)c)
			return ((void *)unsigned_s + i);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char data[] = { 'a', 'b', '\0', 'c', 'd' };

    printf("memchr result: %s\n", (char *)memchr(data, 'c', 5)); //cd
    printf("ft_memchr result: %s\n", (char *)ft_memchr(data, 'c', 5)); //cd
    printf("memchr result (not found): %p\n", memchr(data, 'z', 5)); // 0x0
    printf("ft_memchr result (not found): %p\n", ft_memchr(data, 'z', 5)); //0x0

    return 0;
}
*/
