#include <stdlib.h>

char*	ft_strdup(const char *s)
{
	char	*str;
    char	*p;
    int		len;

    len = 0;
    while (s[len])
        len++;

    str = (char*) malloc(len + 1);
    p = str;

    while (*s)
        *p++ = *s++;
    
    *p = '\0';
    
    return str;
}
