#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	char* p;
	char* q;

	p = (char *) s1;
	q = (char *) s2;
	while (*p && *q && *p == *q)
	{
		p++;
		q++;
	}

	if (*p == '\0' && *q == '\0')
		return 1;
	return 0;
}