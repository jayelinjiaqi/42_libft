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
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
	{
		if (s[j] == c)
			return ((char *)&s[j]);
		j++;
	}
	return (NULL);
}
/*
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
