#include <string.h>

char* ft_strstr(const char *big, const char *little)
{
	char*	p;
	char*	q;
	char*	aux;

	p = (char*) big;
	q = (char*) little;
	aux = p;

	if (*q == '\0')
		return p;

	while (*p)
	{
		if (*p == *q)
		{
			aux = p;
			while (*p && *q && *p == *q)
			{
				p++;
				q++;
			}

			if (*q == '\0')
				return aux;

			return NULL;
		}
		p++;
	}

	return NULL;
}