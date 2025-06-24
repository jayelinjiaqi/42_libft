/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalin <jalin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/19 16:16:42 by jalin             #+#    #+#             */
/*   Updated: 2025/06/24 13:30:06 by jalin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*word_duplicate(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t			i;
	size_t			j;
	int			index;
	char		**result;

	i = 0;
	j = 0;
	index = -1;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (!result)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = -1;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			result[j++] = word_duplicate(s, index, 1);
			index = -1;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}
