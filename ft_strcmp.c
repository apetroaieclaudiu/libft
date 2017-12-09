int	ft_strcmp(const char *s1, const char *s2)
{
	char*	p;
	char*	q;

	p = (char*) s1;
	q = (char*) s2;
	while (*q && *p && *p == *q)
	{
		p++;
		q++;
	}

	return (*p - *q);
}