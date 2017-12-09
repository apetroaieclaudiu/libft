#include "libft.h"

char * ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char* p;
	unsigned int i;

	i = 0;
	p  = (char*) s;
	while (*p)
	{
		*p = (*f)(i, *p);
		p++;
		i++;
	}

	p = (char*) s;

	return p;
}