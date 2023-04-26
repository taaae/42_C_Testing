#include "../../ex05/ft_putstr.c"
#include <stdio.h>

void test5()
{
	char* str = "Hello";
	printf("Should display \"Hello\":\n");
	ft_putstr(str);
	printf("\n");
}

int main()
{
	test5();
}
