#include "../../ex03/ft_str_is_numeric.c"
#include <stdio.h>
#include "string_eq.c"

void test3()
{
	char *numeric = "1234567890";
	char *not_numeric = "-afds+xd";
	char *mixed = "m1x3d";
	char *empty = "";
	int is_ok = 1;
	if (!ft_str_is_numeric(numeric))
	{
		printf("string '1234567890' should be numeric\n");
		is_ok = 0;
	}
	if (ft_str_is_numeric(not_numeric))
	{
		printf("string '-afds+xd' should not be numeric\n");
		is_ok = 0;
	}
	if (ft_str_is_numeric(mixed))
	{
		printf("string 'm1x3d' should not be numeric\n");
		is_ok = 0;
	}
	if (!ft_str_is_numeric(empty))
	{
		printf("empty string should be numeric\n");
		is_ok = 0;
	}
	if (is_ok)
		printf("ex03 is OK!\n");
}

int main()
{
	test3();
}