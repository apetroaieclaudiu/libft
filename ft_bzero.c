#include <string.h>


void ft_bzero(void *s, size_t n)
{
	 if (n) {
        char *d = s;
 
		*d++ = '\0';

        while (--n)
        {
        	*d++ = '\0';
        }
     }
}