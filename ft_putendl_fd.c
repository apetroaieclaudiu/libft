#include "libft.h"

void ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s);
	ft_putchar_fd('\n');
}