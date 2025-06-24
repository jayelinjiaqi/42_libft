/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 12:44:01 by jalin             #+#    #+#             */
/*   Updated: 2025/06/24 13:32:00 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	j;
	char	*result;

	i = 0;
	j = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
		i++;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	while (j < i)
	{
		result[j] = f((unsigned int)j, s[j]);
	}
	return (result);
}
