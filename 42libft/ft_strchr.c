/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:16:42 by jalin             #+#    #+#             */
/*   Updated: 2025/06/24 12:25:41 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)(c))
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
	if (c == '\0')
		return ((char *)&s[-1]);

	if (c == '\0')
	{
		if (s[j] == c)
			return ((char *)&s[j]);
		j++;
	}

#include <stdio.h>
int main(void)
{
    char *i;
    char *j;
    i = "string";
    j = 0;
    j = ft_strchr(i, j);
    printf("%s", j);
    return (0);
}
*/
