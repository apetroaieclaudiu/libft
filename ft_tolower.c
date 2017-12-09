int 	ft_tolower(int c)
{
	char car;

	car = c;
	if (car <= 'Z' && car >= 'A')
		car = car + 32;

	return car;
}