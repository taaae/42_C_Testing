#include "../../ex05/ft_str_is_uppercase.c"
#include <stdio.h>
#include "string_eq.c"

void test5()
{
	char *caps = "CAPS";
	char *mixed = "adlsjfhKLDJSFH";
	char *weird = ")*(#&*()098357085)";
	char *empty = "";
	int is_ok = 1;
	if (!ft_str_is_uppercase(caps))
	{
		printf("'CAPS' should be uppercase");
		is_ok = 0;
	}
	if (ft_str_is_uppercase(mixed))
	{
		printf("'adlsjfhKLDJSFH' should not be uppercase");
		is_ok = 0;

	}
	if (ft_str_is_uppercase(weird))
	{
		printf("')*(#&*()098357085)' should not be uppercase");
		is_ok = 0;

	}
	if (!ft_str_is_uppercase(empty))
	{
		printf("empty string should be uppercase");
		is_ok = 0;
	}
	if (is_ok)
		printf("ex05 is OK!\n");
}



int main()
{
	test5();
}