



static int	ft_count_word(char const *str, char c)
{
  int  i;
	int  j;

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

static char  **ft_free_all(char **s)
{
	int  i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

static int	ft_skip_c(char const *s, char c)
{
	int  i;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	return (i);
}

static int  ft_len_excl_c(char const *s, int i, char c)
{
	int  len_to_copy;

	len_to_copy = 0;
	while (s[i] != c && s[i])
	{
		len_to_copy++;
		i++;
	}
return (len_to_copy);
}

char		**ft_split(char const *s, char c)
{
	char  **copy;
	int  len;
	int  k;
	int  i;
	int  start;

	k = -1;
	i = 0;
	if (!s || !(copy = (char**)malloc(sizeof(char*) * (ft_count_word(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		len = 0;
		i += ft_skip_c(&s[i], c);
		start = i;
		len = ft_len_excl_c(s, i, c);
		i += len;
		if (len)
			if (!(copy[++k] = ft_substr(s, start, len)))
				return (ft_free_all(copy));
	}
	copy[++k] = 0;
	return (copy);
}

/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *sub;
    size_t i;

    if (!s)
        return (NULL);
    if (start >= strlen(s))
        return (strdup("")); // Return an empty string if start is out of bounds

    if (len > strlen(s) - start)
        len = strlen(s) - start;

    sub = (char *)malloc(sizeof(char) * (len + 1));
    if (!sub)
        return (NULL);

    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}
*/
