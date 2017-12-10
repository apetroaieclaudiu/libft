#include "libft.h"

char**	ft_strsplit(char const *s, char c)
{

	char**	e;

	e = (char**) s;
	*(*e) = c;
	if (s)
		return e;
	return NULL;
}