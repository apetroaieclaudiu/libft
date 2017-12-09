#include <string.h>

void*	ft_memccpy(void *dest, const void *src,int c, size_t n)
{
	char			*csrc;
	char			*cdest;
	unsigned int	i;

	cdest = (char *)dest;
 	csrc = (char *)src;
 	i = 0;
	while (i < n && csrc[i] != c)
	{ 	
       cdest[i] = csrc[i];
       i++;
    }

    return dest;
}