#include "../../ex04/ft_ultimate_div_mod.c"
#include <stdio.h>

void test4()
{
	int	a = 13;
	int	b = 3;
	ft_ultimate_div_mod(&a, &b);
	if (a != 4)
		printf("div is not correct!\n");
	if (b != 1)
		printf("mod is not correct!\n");
	if (a == 4 && b == 1)
		printf("ex04 is OK!\n");
}

int main()
{
	test4();
}
