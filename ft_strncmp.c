#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char*	p;
	unsigned char*	q;

	p = (unsigned char*) s1;
	q = (unsigned char*) s2;
	while (*q && *p && *p == *q && n)
	{
		p++;
		q++;
		n--;
	}

	return (*p - *q);
}
