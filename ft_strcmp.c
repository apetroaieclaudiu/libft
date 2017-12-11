int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char*	p;
	unsigned char*	q;

	p = (unsigned char*) s1;
	q = (unsigned char*) s2;
	while (*q && *p && *p == *q)
	{
		p++;
		q++;
	}

	return (*p - *q);
}