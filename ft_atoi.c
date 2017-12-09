int	ft_atoi(const char *str)
{
	char *p;
	int numar;
	int semn;

	p = (char*) str;
	semn = 1;
	numar = 0;

	if (*p == '-')
	{
		semn = -1;
		p++;
	}

	while (*p && *p >= '0' && *p <= '9')
	{
		numar = numar * 10 + *p - '0';
		p++;
	}

	return semn * numar;
}