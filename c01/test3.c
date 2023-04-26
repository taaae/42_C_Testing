#include "../../ex03/ft_div_mod.c"
#include "stdio.h"

void test3()
{
	int	div;
	int	mod;
	int	a = 10;
	int b = 3;
	ft_div_mod(a, b, &div, &mod);
	if (div != 3)
		printf("div is not correct!\n");
	if (mod != 1)
		printf("mod is not correct!\n");
	if (div == 3 && mod == 1)
		printf("ex03 is OK!\n");
}

int main()
{
	test3();
}
