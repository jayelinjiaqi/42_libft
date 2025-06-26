# 42_libft

## 📁 int atoi(const char *nptr); 
Converts the initial portion of the string pointed to by nptr to int

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
## 📁 void bzero(void *s, size_t n);
Erases  the  data  in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.

<pre> <code> 
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
</code> </pre>

---
## 📁 void *calloc(size_t nmemb, size_t size);

Allocates memory for an array of  nmemb  elements of  size bytes each and returns a pointer to the allocated memory.  The memory is set to zero.  If nmemb or size is 0,  then  calloc()  returns either  NULL,  or a unique pointer value that can later be successfully passed to free().  If the multiplication of nmemb and size would result in  integer  overflow, then calloc() returns an error.

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
---
## 📁 int isalnum(int c); 

Checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)

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
---
## 📁 int isalpha(int c);

Checks  for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) ||  islower(c)). In  some locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.

<pre> <code> 
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
</code> </pre>
---
## 📁 int isascii(int c);

Checks whether c is a 7-bit unsigned char value that  fits  into the ASCII character set.

<pre> <code> 
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
</code> </pre>
---
## 📁 int isdigit(int c);

Checks for a digit (0 through 9).

<pre> <code> 
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
</code> </pre>
---
## 📁 int isprint(int c);

Checks for any printable character including space.

<pre> <code> 
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
</code> </pre>
---
## 📁 char *ft_itoa(int n);

Parameters n: The integer to convert.
Return value: The string representing the integer. NULL if the allocation fails.
External functs: malloc
Description: Allocates memory (using malloc(3)) and returns a string representing the integer received as an
argument. Negative numbers must be handled.

<pre> <code> 
static int	ft_intlen(int n)
{
	long	num;
	int		len;

	num = n;
	len = 0;
	if (num < 0)
		len = 1;
	else
		len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	num;

	num = n;
	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len = len - 1;
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[len] = (num % 10) + '0';
		len--;
		num /= 10;
	}
	return (str);
}
</code> </pre>
---
## 📁 void *memchr(const void *s, int c, size_t n);

The  memchr()  function  scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the  bytes  of the memory area pointed to by s are interpreted as unsigned char.

<pre> <code> 
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*unsigned_s;
	size_t				i;

	unsigned_s = s;
	i = 0;
	while (i < n)
	{
		if (unsigned_s[i] == (unsigned char)c)
			return ((void *)unsigned_s + i);
		i++;
	}
	return (NULL);
}
</code> </pre>
---
