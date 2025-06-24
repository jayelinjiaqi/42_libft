/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:44:01 by jalin             #+#    #+#             */
/*   Updated: 2025/06/24 12:52:24 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char		*ptr;
	size_t				i;
	unsigned long long	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = (unsigned long long)(nmemb) * (unsigned long long)(size);
	if (nmemb != 0 && total / nmemb != size)
		return (NULL);
	i = 0;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	while (i < nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
/*
#include <stdio.h>

int main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));

    if (arr)
    {
        for (int i = 0; i < 5; i++)
            printf("%d ", arr[i]); // All should be 0
        printf("\n");

        free(arr);
    }

    return 0;
}
*/
