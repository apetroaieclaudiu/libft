int 	ft_toupper(int c)
{
	char car;

	car = c;
	if (car <= 'z' && car >= 'a')
		car = car - 32;

	return car;
}