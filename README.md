# 42_libft

## 📁 atoi (converts the initial portion of the string pointed to by nptr to int)

<pre> <code> 
int atoi(const char *nptr)
{
	int	i;
	int	j;
	int	sign;

	i = 0;
	j = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = (j * 10) + (str[i] - '0');
		i++;
	}
	j = sign * j;
	return (j);
}
</code> </pre>

---
## 📁 bzero (erases  the  data  in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes  containing '\0') to that area)

<pre> <code> 
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
</code> </pre>

---
## 📁 calloc (allocates memory for an array of  nmemb  elements of  size bytes each and returns a pointer to the allocated memory.  The memory is set to zero.  If nmemb or size is 0,  then  calloc()  returns either  NULL,  or a unique pointer value that can later be successfully passed to free().  If the multiplication of nmemb and size would result in  integer  overflow, then calloc() returns an error.

<pre> <code> 
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char		*ptr;
	size_t				i;
	unsigned long long	total;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = (unsigned long long)nmemb * (unsigned long long)size;
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
</code> </pre>
