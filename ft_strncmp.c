#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char*	p;
	char*	q;

	p = (char*) s1;
	q = (char*) s2;
	while (*q && *p && *p == *q && n)
	{
		p++;
		q++;
		n--;
	}

	return (*p - *q);
}
