#include "libft.h"

char* ft_strnew(size_t size)
{
	char* mem;

	mem = (char*) malloc(size);

	ft_bzero((void *) mem, size);
	
	return mem;
}