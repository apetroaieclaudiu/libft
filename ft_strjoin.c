#include "libft.h"

char*	ft_strjoin(char const *s1, char const *s2)
{
	char* p;
	char* start;

	p = ft_strnew(ft_strlen(s1) + ft_strlen(s2) - 1);
	if(!p)
		return (NULL);
	start = p;

	ft_strcat(p, s1);
	ft_strcat(p, s2);
	return start;
}