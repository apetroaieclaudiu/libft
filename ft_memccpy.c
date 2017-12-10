#include <string.h>

void*	ft_memccpy(void *dest, const void *src,int c, size_t n)
{
	char	*ptr;
	size_t	i;

	i = -1;
	ptr = dest;
	while (++i < n)
	{
		*(ptr + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)
			return (dest + i + 1);
	}
	return (NULL);
}