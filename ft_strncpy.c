#include <string.h>

char*	ft_strncpy(char *dest, const char *src, size_t size)
{
	char *save;
	
	save = dest;
	while(*src && size)
	{
		*dest++ = *src++;
		size--;
	}

	while (size)
	{
		*dest++ = '\0';
		size--;
	}
	return save;
}