# 42_libft

## 📁 atoi (Allocates space for count objects of size bytens memory each. Return pointer to allocated memory)

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
## 📁 bzero (erases  the  data  in the n bytes of the memory
       starting at the location pointed to by s, by writing zeros (bytes  con‐
       taining '\0') to that area)

<pre> <code> 
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
</code> </pre>
