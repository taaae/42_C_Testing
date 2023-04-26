#include "../../ex07/ft_rev_int_tab.c"
#include <stdio.h>

void test7()
{
	int even[4] = {1, 2, 3, 4};
	int odd[3] = {1, 2, 3};
	int one[1] = {1};
	int empty[0] = {};
	int is_correct = 1;

	ft_rev_int_tab(even, 4);
	ft_rev_int_tab(odd, 3);
	ft_rev_int_tab(one, 1);
	ft_rev_int_tab(empty, 0);

	if (even[0] != 4 || even[1] != 3 || even[2] != 2 || even[3] != 1)
	{
		printf("Doesn't work for [1, 2, 3, 4] arr\n");
		is_correct = 0;
	}
	if (odd[0] != 3 || odd[1] != 2 || odd[2] != 1)
	{
		printf("Doesn't work for [1, 2, 3] arr\n");
		is_correct = 0;
	}
	if (one[0] != 1) {
		printf("Doesn't work for [1] arr");
		is_correct = 0;
	}
	if (is_correct)
		printf("ex07 is OK!\n");
}

int main()
{
	test7();
}
