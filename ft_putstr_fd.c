#include "libft.h"

void ft_putstr_fd(char const *s, int fd)
{
	char *p;

	p = (char*) s;
	while(*p)
	{
		ft_putchar_fd(*p);
		p++;
	}
}