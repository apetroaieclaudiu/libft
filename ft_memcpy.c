#include <string.h>

void*	ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*csrc;
	char			*cdest;
	unsigned int	i;

	cdest = (char *)dest;
 	csrc = (char *)src;
 	i = 0;
	while (i < n)
	{ 	
       cdest[i] = csrc[i];
       i++;
    }

    return dest;
}