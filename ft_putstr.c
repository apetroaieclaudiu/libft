#include "libft.h"

void ft_putstr(const char *s)
{
	char* p;

	p = (char*) s;
	while (*p)
	{
		ft_putchar(*p);
		p++;
	}
}