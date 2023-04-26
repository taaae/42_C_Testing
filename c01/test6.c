#include "../../ex06/ft_strlen.c"
#include <stdio.h>

void test6()
{
	char* str = "12345";
	if (ft_strlen(str) != 5)
		printf("\'12345\' len should be 5!\n");
	if (ft_strlen("") != 0)
		printf("empty string len should be 0!\n");
	if (ft_strlen(str) == 5 && ft_strlen("") == 0)
		printf("ex06 is OK!\n");
}

int main()
{
	test6();
}
