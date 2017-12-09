#include "libft.h"

char* ft_strsub(char const *s, unsigned int start, size_t len)
{
	char* p;
	char* ret;
	char *aux;
	if (start > ft_strlen(s) || len > (ft_strlen(s) - start))
		return NULL;

	p = ft_strnew((size_t) len);

	if (!p)
		return NULL;

	ret = p;
	aux = (char*) s;
	aux = aux + start;
	
	while (*aux && len)
	{
		*p = *aux;
		len--;
		p++;
		aux++;
	}

	 *p = '\0';

	return ret;
}