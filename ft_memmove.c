#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
		size_t	i;

	d = (char*)dest;
	s = (char*)src;
	i = 0;
	if (s < d)
	{
		while (n--)
			d[n] = s[n];
	}
	else
		ft_memcpy(d, s, n);
	return (d);
}