#include "libft.h"
#include <stdio.h>
#include <ctype.h>

void test(unsigned int i,char *test)
{
	*test = *test - 32;
	printf("%d\n", i);
}

int main()
{
	printf("%d %d\n", isalpha(20), ft_isalpha(20));
	return 0;
}