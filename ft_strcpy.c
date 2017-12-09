char*	ft_strcpy(char *dest, const char *src)
{
	char *save;
	
	save = dest;
	while(*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return save;
}
