#include "libft.h"
 
size_t	ft_strlcat (char *dest, const char *src, size_t size)
{
	size_t pos;

	pos = ft_strlen(dest);
    if (size <= pos) return pos; 
    size--; 

    while (pos < size && *src)
    {
        dest[pos++] = *src;
        src++;
    }

    dest[pos] = '\0';
    return pos;
}