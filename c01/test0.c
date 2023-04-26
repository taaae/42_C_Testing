#include "../../ex00/ft_ft.c"
#include <stdio.h>

void test0()
{
	int num = 10;
	ft_ft(&num);
	if (num != 42)
	{
		printf("num is not 42!\n");
	}
	else
	{
		printf("ex00 is OK!\n");
	}
}

int main()
{
	test0();
}
