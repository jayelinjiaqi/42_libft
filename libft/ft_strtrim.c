/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:16:42 by jalin             #+#    #+#             */
/*   Updated: 2025/06/23 15:20:22 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*s;

	start = 0;
	end = 0;
	i = 0;
	while (s1[start] && ft_is_in(s1[start], set))
		start++;
	while (s1[end])
		end++;
	while ((end - 1) >= start && ft_is_in(s1[end - 1], set))
		end--;
	s = (char *)malloc(sizeof(char) * (end - start));
	if (!s)
		return (NULL);
	while (start < end)
		s[i++] = s1[start++];
	s[i] = '\0';
	return (s);
}
/*
#include <stdio.h>

int main(void)
{
    char *result;

    result = ft_strtrim("  \t\n  Hello World!  \n\t  ", " \n\t");
    printf("Trimmed: \"%s\"\n", result);
    free(result);

    result = ft_strtrim(">>>Important<<<", "><");
    printf("Trimmed: \"%s\"\n", result);
    free(result);

    result = ft_strtrim("NoTrimNeeded", " ");
    printf("Trimmed: \"%s\"\n", result);
    free(result);
    result = ft_strtrim("******", "*");
    printf("Trimmed: \"%s\"\n", result);
    free(result);

    return 0;
}
*/
