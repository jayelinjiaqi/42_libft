/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:16:42 by jalin             #+#    #+#             */
/*   Updated: 2025/07/11 12:08:05 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *str, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i] != c && (str[i] != '\0'))
			j++;
		while (str[i] != c && (str[i] != '\0'))
			i++;
	}
	return (j);
}

static char	**ft_free_all(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int	ft_len_excl_c(char const *s, int i, char c)
{
	int	len_to_copy;

	len_to_copy = 0;
	while (s[i] != c && s[i])
	{
		len_to_copy++;
		i++;
	}
	return (len_to_copy);
}

static char	**ft_split_main(char const *s, char c, char **copy)
{
	int	i;
	int	k;
	int	len;
	int	start;

	i = 0;
	k = -1;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		len = ft_len_excl_c(s, i, c);
		i += len;
		if (len)
		{
			copy[++k] = ft_substr(s, start, len);
			if (!copy[k])
				return (ft_free_all(copy));
		}
	}
	copy[++k] = 0;
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**copy;

	if (!s)
		return (NULL);
	copy = (char **)malloc(sizeof(char *) * (ft_count_word(s, c) + 1));
	if (!copy)
		return (NULL);
	return (ft_split_main(s, c, copy));
}
