#include "../../ex02/ft_swap.c"
#include <stdio.h>

void test2()
{
	int a = 10;
	int b = 12;
	ft_swap(&a, &b);
	if (a != 12)
	{
		printf("first number is not correct!\n");
	}
	if (b != 10)
	{
		printf("second number is not correct!\n");
	}
	if (a == 12 && b == 10)
	{
		printf("ex02 is OK!\n");
	}
}

int main()
{
	test2();
}
