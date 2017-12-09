#include "libft.h"

char*	ft_strmap(char const *s, char (*f)(char))
{
	char* p;

	p  = (char*) s;
	while (*p)
	{
		*p = (*f)(*p);
		p++;
	}

	p = (char*) s;

	return p;
}