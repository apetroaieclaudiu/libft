#include <string.h>

char*	ft_strnstr(const char *big, const char *little, size_t len)
{
	char*	p;
	char*	q;
	char*	aux;

	p = (char*) big;
	q = (char*) little;
	aux = p;

	if (*q == '\0')
		return p;

	while (*p && len)
	{
		if (*p == *q)
		{
			aux = p;
			while (*p && *q && *p == *q)
			{
				p++;
				q++;
			}

			if (*q == '\0' || *p == *q)
				return aux;

			return NULL;
		}
		p++;
		len--;
	}

	return NULL;
}