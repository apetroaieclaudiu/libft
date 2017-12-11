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
	printf("%d %d\n", atoi("  20   2"), ft_atoi("   20  2 "));
	return 0;
}