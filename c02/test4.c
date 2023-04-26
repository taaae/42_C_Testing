#include "../../ex04/ft_str_is_lowercase.c"
#include <stdio.h>
#include "string_eq.c"

void test4()
{
	char *lower = "lowerza";
	char *mixed = "adlsjfhKLDJSFH";
	char *weird = ")*(#&*()098357085)";
	char *empty = "";
	int is_ok = 1;
	if (!ft_str_is_lowercase(lower))
	{
		printf("'lowerza' should be lower case\n");
		is_ok = 0;
	}
	if (ft_str_is_lowercase(mixed))
	{
		printf("'adlsjfhKLDJSFH' should be lower case\n");
		is_ok = 0;
	}
	if (ft_str_is_lowercase(weird))
	{
		printf("')*(#&*()098357085)' should be lower case\n");
		is_ok = 0;
	}
	if (!ft_str_is_lowercase(empty))
	{
		printf("empty string should be lower case\n");
		is_ok = 0;
	}
	if (is_ok)
		printf("ex04 is OK!\n");
}

int main()
{
	test4();
}
