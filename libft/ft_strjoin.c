/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:16:42 by jalin             #+#    #+#             */
/*   Updated: 2025/06/23 16:07:15 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_slen(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*s;

	i = ft_slen(s1);
	j = ft_slen(s2);
	k = -1;
	l = -1;
	s = (char *)malloc(sizeof(char) * (i + j + 1));
	if (!s)
		return (NULL);
	while (++k < i)
	{
		s[k] = s1[k];
	}
	while (++l < j)
	{
		s[k + l] = s2[l];
	}
	s[k + l] = '\0';
	return (s);
}
/*
#include <stdio.h>

int main(void)
{
    char *result = ft_strjoin("Hello", "World!");
    if (result)
    {
        printf("%s\n", result); // Expected: "Hello, world!"
        free(result);
    }
    return 0;
}
*/
