#include "libft.h"

void ft_putstr(char const *s)
{
	char* p;

	p = (char*) s;
	while (*p)
	{
		ft_putchar(*p);
		p++;
	}
}