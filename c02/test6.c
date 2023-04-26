#include "../../ex06/ft_str_is_printable.c"
#include <stdio.h>
#include "string_eq.c"

void test6()
{
	char *normal = "iquhriu  kjasdhfklj fj";
	char weird[] = "wf\n\xFD";
	char *empty = "";
	int is_ok = 1;
	if (!ft_str_is_printable(normal))
	{
		printf("'iquhriu  kjasdhfklj fj' should be printable\n");
		is_ok = 0;
	}
	if (!ft_str_is_printable(empty))
	{
		printf("empty string should be printable\n");
		is_ok = 0;
	}
	if (ft_str_is_printable(weird))
	{
		printf("'wf\\n\\xFD' should not be printable\n");
		is_ok = 0;
	}
	if (is_ok)
		printf("ex06 is OK!\n");
}

int main()
{
	test6();
}