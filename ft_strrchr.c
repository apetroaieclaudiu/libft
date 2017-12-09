#include <string.h>

char*	ft_strrchr(const char *s, int c)
{
	char *p;
	char *aux;
	
	p = (char *) s;
	aux = NULL;
	while (*p)
	{
		if (*p == c)
			aux = p;
		p++;
	}

	return aux;
}