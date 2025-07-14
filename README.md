## 📁 char **ft_split(const char *s, char c); 

DESCRIPTION:
Allocates memory (using malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must
end with a NULL pointer.

RETURN VALUE:
The array of new strings resulting from the split. NULL if the allocation fails.

<pre> <code>
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

</code> </pre>

---

## 📁 int atoi(const char *nptr); 
DESCRIPTION:
The  atoi() function converts the initial portion of the string pointed to by nptr to int.  The behavior is the same as

strtol(nptr, NULL, 10);

except that atoi() does not detect errors.

The atol() and atoll() functions behave the same as atoi(), except that they  convert the initial portion of the string to their return type of long or long long.


RETURN VALUE:
The converted value or 0 on error.

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
The  bzero()  function  erases  the  data  in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes  containing '\0') to that area.

<pre> <code> 
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
</code> </pre>

---
## 📁 void *calloc(size_t nmemb, size_t size);

DESCRIPTION: 
The calloc() function allocates memory for an array of  nmemb  elements of  size bytes each and returns a pointer to the allocated memory.  The memory is set to zero.  If nmemb or size is 0,  then  calloc()  returns either  NULL,  or a unique pointer value that can later be successfully passed to free().  If the multiplication of nmemb and size would result in  integer  overflow, then calloc() returns an error.  By contrast, an integer overflow would not be detected in the following  call  to  malloc(),  with the result that an incorrectly sized block of memory would be allocated:

malloc(nmemb * size);

The malloc() function allocates size bytes and returns a pointer to the allocated  memory.   The memory is not initialized.  If size is 0, then malloc() returns either NULL, or a unique pointer value that can  later be successfully passed to free().

The  free()  function  frees  the memory space pointed to by ptr, which must have been returned by a previous call to  malloc(),  calloc(),  or realloc().   Otherwise, or if free(ptr) has already been called before, undefined behavior occurs.  If ptr is NULL, no operation is performed.

RETURN VALUE
The malloc() and calloc() functions return a pointer to  the  allocated memory,  which  is  suitably  aligned for any built-in type.  On error, these functions return NULL.  NULL may also be returned by a successful call  to  malloc() with a size of zero, or by a successful call to calloc() with nmemb or size equal to zero.

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
int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
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

Description: 
Allocates memory (using malloc(3)) and returns a string representing the integer received as an
argument. Negative numbers must be handled.

Return value: 
The string representing the integer. NULL if the allocation fails.
External functs: malloc

Parameters n: 
The integer to convert.

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

DESCRIPTION:
The  memchr()  function  scans  the  initial n bytes of the memory area pointed to by s for the first instance of c.  Both c and the  bytes  of the memory area pointed to by s are interpreted as unsigned char.

RETURN VALUE:
The  memchr()  function return a pointer to the matching byte or NULL if the character does not occur in the given memory area.

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
## 📁 int memcmp(const void *s1, const void *s2, size_t n);

DESCRIPTION:
The  memcmp()  function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.

RETURN VALUE:
The memcmp() function returns  an  integer  less  than,  equal  to,  or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.

For a nonzero return value, the sign is determined by the sign  of  the difference  between  the  first  pair of bytes (interpreted as unsigned char) that differ in s1 and s2.

If n is zero, the return value is zero.
<pre> <code> 
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*us1;
	const unsigned char	*us2;
	size_t				i;

	us1 = s1;
	us2 = s2;
	i = 0;
	while (i < n)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}
</code> </pre>
---
## 📁 void *memcpy(void *dest, const void *src, size_t n);

DESCRIPTION:
The  memcpy()  function  copies  n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove(3) if the memory areas do overlap.

RETURN VALUE:
The memcpy() function returns a pointer to dest.

<pre> <code> 
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	pdest = (unsigned char *)dest;
	psrc = (unsigned char *)src;
	while (n > 0)
	{
		*pdest = *psrc;
		pdest++;
		psrc++;
		n--;
	}
	return (dest);
}
</code> </pre>
---
## 📁 void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION:
The  memmove()  function  copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the  bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from  the  temporary array to dest.

RETURN VALUE:
The memmove() function returns a pointer to dest.

<pre> <code> 
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;
	size_t				i;

	destination = dst;
	source = src;
	i = 0;
	if (destination < source)
	{
		while (i < n)
		{
			destination[i] = source[i];
			i++;
		}
	}
	else if (destination > source)
	{
		i = n;
		while (i > 0)
		{
			destination[i - 1] = source[i -1];
			i--;
		}
	}
	return (dst);
}
</code> </pre>
---
## 📁 void *memset(void *s, int c, size_t n);

DESCRIPTION:
The  memset()  function  fills  the  first  n  bytes of the memory area pointed to by s with the constant byte c.

RETURN VALUE:
The memset() function returns a pointer to the memory area s.

<pre> <code> 
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
</code> </pre>
---
## 📁 char *strchr(const char *s, int c);

DESCRIPTION:
       The  strchr() function returns a pointer to the first occurrence of the
       character c in the string s.
       Here "character" means "byte"; these functions do not work with wide or
       multibyte characters.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer  to  the  matched
       character or NULL if the character is not found.  The terminating null
       byte is considered part of the string, so that if  c  is  specified  as
       '\0', these functions return a pointer to the terminator.

<pre> <code> 
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)(c))
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
</code> </pre>
---
## 📁 char *strdup(const char *s);

DESCRIPTION:
       The  strdup() function returns a pointer to a new string which is a du‐
       plicate of the string s.  Memory for the new string  is  obtained  with
       malloc(3), and can be freed with free(3).

RETURN VALUE:
       On  success,  the strdup() function returns a pointer to the duplicated
       string.  It returns NULL if insufficient memory was available, with er‐
       rno set to indicate the cause of the error.

<pre> <code> 
char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (s[len])
	{
		len++;
	}
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
</code> </pre>
---
## 📁      size_t strlcat(char *dst, const char *src, size_t size);


DESCRIPTION:
	The strlcpy() and strlcat() functions copy and concatenate strings re‐
     spectively.  They are designed to be safer, more consistent, and less er‐
     ror prone replacements for strncpy(3) and strncat(3).  Unlike those func‐
     tions, strlcpy() and strlcat() take the full size of the buffer (not just
     the length) and guarantee to NUL-terminate the result (as long as size is
     larger than 0 or, in the case of strlcat(), as long as there is at least
     one byte free in dst).  Note that a byte for the NUL should be included
     in size.  Also note that strlcpy() and strlcat() only operate on true “C”
     strings.  This means that for strlcpy() src must be NUL-terminated and
     for strlcat() both src and dst must be NUL-terminated.

RETURN VALUE:
       The strlcpy() and strlcat() functions return the total length of the
     string they tried to create.  For strlcpy() that means the length of src.
     For strlcat() that means the initial length of dst plus the length of
     src.  While this may seem somewhat confusing, it was done to make trunca‐
     tion detection simple.


<pre> <code> 
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = 0;
	slen = 0;
	i = 0;
	while (dst[dlen] && dlen < size)
	{
		dlen++;
	}
	while (src[slen])
	{
		slen++;
	}
	if (dlen == size)
		return (size + slen);
	while (src[i] && dlen + i + 1 < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < size)
		dst[dlen + i] = '\0';
	return (dlen + slen);
}

</code> </pre>
