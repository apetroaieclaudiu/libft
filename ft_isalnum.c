int		ft_isalnum(int c)
{
	char car;

	car = c;
	if ((car >= 'A' && car <='z') || (car >= '0' && car <= '9'))
		return 1;
	return 0;
}