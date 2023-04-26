#include "../../ex12/ft_print_memory.c"
#include <stdio.h>
#include "string_eq.c"

void test12()
{
	write(1, "\n", 1);
	char str[] = "Bonjour les aminches...c. est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. ";
	ft_print_memory(str, 92);
	write(1, "\n", 1);
	write(1, "\n", 1);
	printf("should display nothing:\n");
	ft_print_memory(str, 0);
	write(1, "\n", 1);
	printf("should display \"ffffffffffffffff\" at the start and seg fault at the end:\n");
	char *ptr = (char *)0xFFFFFFFFFFFFFFFF;
	ft_print_memory(ptr, 1);
	write(1, "\n", 1);
}

int main()
{
	test12();
}