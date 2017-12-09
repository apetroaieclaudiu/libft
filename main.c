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
	char mem[] = "Didi";
	char mm[] = " este foarte frumoasa";
	char* test;
	test = ft_strjoin(mem,mm);
	puts(test);

	return 0;
}