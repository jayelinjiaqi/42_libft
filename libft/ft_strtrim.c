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
	size_t		start;
	size_t		end;
	size_t		i;
	char		*trimmed;

	start = 0;
	i = 0;
	while (s1[start] && ft_is_in(s1[start], set))
		start++;
	end = start;
	while (s1[end])
		end++;
	while (end > start && ft_is_in(s1[end - 1], set))
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
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
