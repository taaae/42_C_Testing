#include "../../ex11/ft_putstr_non_printable.c"
#include <stdio.h>
#include "string_eq.c"

void test11()
{
	printf("Testing 11\n");
	printf("Should be \"abc\":\n");
	ft_putstr_non_printable("abc");
	printf("\n");
	printf("Should be empty: \n");
	ft_putstr_non_printable("");
	printf("\n");
	printf("Should be \"Coucou\\0atu vas bien ?\":\n");
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	printf("\n");
	printf("Should be \"\\09\\1b\":\n");
	ft_putstr_non_printable("\t\x1B");
	printf("\n");
	printf("Should be \"\\fd\\ff\":\n");
	ft_putstr_non_printable("\xFD\xFF");
	printf("\n");
}

int main()
{
	test11();
}