#include "libft.h"

char*	ft_strmap(char const *s, char (*f)(char))
{
	char	*fstr;
	int		i;
	int		j;

	if (s && f)
	{
		i = 0;
		j = ft_strlen((char *)s);
		fstr = (char *)malloc(j + 1);
		if (!fstr)
			return (NULL);
		while (s[i] != 0)
		{
			fstr[i] = f(s[i]);
			i++;
		}
		fstr[i] = '\0';
		return (fstr);
	}
	return (NULL);
}