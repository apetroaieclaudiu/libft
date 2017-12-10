#include "libft.h"

char*	ft_strdup(const char *s)
{
	char	*str;
    char	*p;
    char    *q;

    
    str = (char*) malloc(ft_strlen(s) + 1);
    if (!str)
        return NULL;
    p = str;
    q = (char*) s;
    while (*q)
    {
        *p = *q;
        p++;
        q++;
    }
    
    *p = '\0';
    
    return str;
}
