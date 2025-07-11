/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:16:42 by jalin             #+#    #+#             */
/*   Updated: 2025/06/26 19:54:22 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len])
	{
		len++;
	}
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(const char *s1); // Your implementation

int main(void)
{
    const char *original = "Hello, World!";
    char *copy = ft_strdup(original);

    if (copy)
    {
        printf("Original: %s\n", original);
        printf("Duplicate: %s\n", copy);
        free(copy);
    }
    else
    {
        printf("ft_strdup failed to allocate memory.\n");
    }

    return 0;
}
*/
