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

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
int main(void)
{
    char buffer[] = "Hello!";
    printf("Before: %s\n", buffer);

    ft_bezero(buffer, 5);
    printf("After: %s\n", buffer);

    for (int i = 0; i < 6; i++)
        printf("buffer[%d] = %d\n", i, (unsigned char)buffer[i]);
}
*/
