int	ft_isalpha(int c)
{
	char car;

	car = c;

	if (car >= 'A' && car <= 'z')
		return	1;
	return 0;
}