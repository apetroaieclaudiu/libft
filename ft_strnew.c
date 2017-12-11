#include "libft.h"

char* ft_strnew(size_t size)
{
	char* mem;


	mem = (char*) malloc(size + 1);
	if (!mem)
	{
		return NULL;
	}
	ft_bzero((void *) mem, size + 1);
	
	return mem;
}