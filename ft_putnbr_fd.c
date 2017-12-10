#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n > 2147483647 || n < -2147483648)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648");
		return ;
	}
	if (n < 0)
	{
		n = n * -1;
		ft_putchar_fd('-');
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0');
		return ;
	}
	ft_putnbr_fd(n / 10);
	ft_putchar_fd((n % 10) + '0');
	return ;
}