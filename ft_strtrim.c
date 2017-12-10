#include "libft.h"

char*	ft_strtrim(char const *s)
{
	char*	sir;
	char*	p;
	char*	start;

	while (*s && (*s != ' ' || *s != '\t' || *s != '\n'))
	{
		s++;
	}
	start = (char*) s;
	while (*s)
	{
		if (*s != ' ' && *s != '\t' && *s != '\n')
			p = (char*) s;
		s++;
	}

	sir = ft_strnew(ft_strlen(p) - ft_strlen(start));

	ft_strncpy(sir,start, (int) ft_strlen(p) - ft_strlen(start));
	return sir;
}