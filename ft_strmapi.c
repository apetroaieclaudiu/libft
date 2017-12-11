#include "libft.h"

char* ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*fstr;
	unsigned int		i;
	int					j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		fstr = (char *)malloc(j + 1);
		if (!fstr)
			return (NULL);
		while (s[i] != 0)
		{
			fstr[i] = f(i, s[i]);
			i++;
		}
		fstr[i] = '\0';
		return (fstr);
	}
	return (NULL);
}