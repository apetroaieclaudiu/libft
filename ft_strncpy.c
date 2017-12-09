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
	*dest = '\0';
	return save;
}