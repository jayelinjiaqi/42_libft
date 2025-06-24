/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:16:42 by jalin             #+#    #+#             */
/*   Updated: 2025/06/23 16:26:00 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	if (dstsize)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

size_t	sys_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (src[i] && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}

void	test_case(const char *src, size_t dstsize)
{
	char	dst1[50] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	char	dst2[50] = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	size_t	ret1, ret2;

	ret1 = ft_strlcpy(dst1, src, dstsize);
	ret2 = sys_strlcpy(dst2, src, dstsize);

	printf("src = \"%s\", dstsize = %zu\n", src, dstsize);
	printf("Your ft_strlcpy : \"%s\" (returned %zu)\n", dst1, ret1);
	printf("Lib  strlcpy    : \"%s\" (returned %zu)\n", dst2, ret2);
	printf("Match? %s\n\n", 
	(ret1 == ret2 && strcmp(dst1, dst2) == 0) ? "✅ YES" : "❌ NO");
}

int	main(void)
{
	printf("🧪 Running ft_strlcpy test suite:\n\n");

	test_case("Hello, world!", 0);      // dstsize = 0
	test_case("Hello, world!", 5);      // smaller than src
	test_case("Hello, world!", 13);     // exact fit
	test_case("Hello, world!", 50);     // larger than src
	test_case("", 10);                  // empty src
	test_case("42", 3);                 // short string, edge size
	test_case("test", 1);               // small buffer
	test_case("abcdefghijklmnopqrstuvwxyz", 5);  // cut-off string

	return (0);
}
*/
