#include "../../ex08/ft_sort_int_tab.c"
#include <stdio.h>

void test8()
{
	int pos[5] = {4, 6, 1, 5, 3};
	// 1 3 4 5 6
	int neg[4] = {-2, -42, 0, -3};
	// -42 -3 -2 0
	int same[8] = {2, 2, 1, -3, 42, 2, 199, 52};
	// -3 1 2 2 2 42 52 199
	int one[1] = {1};
	// 1
	int empty[0] = {};
	int reverse[7] = {7, 6, 5, 4, 3, 2, 1};
	int is_correct = 1;

	ft_sort_int_tab(pos, 5);
	ft_sort_int_tab(neg, 4);
	ft_sort_int_tab(same, 8);
	ft_sort_int_tab(one, 1);
	ft_sort_int_tab(empty, 0);
	ft_sort_int_tab(reverse, 7);

	if (pos[0] != 1 || pos[1] != 3 || pos[2] != 4 || pos[3] != 5 || pos[4] != 6)
	{
		printf("Doesn't work for [4, 6, 1, 5, 3] arr\n");
		is_correct = 0;
	}
	if (neg[0] != -42 || neg[1] != -3 || neg[2] != -2 || neg[3] != 0)
	{
		printf("Doesn't work for [-2, -42, 0, -3] arr\n");
		is_correct = 0;
	}
	if (same[0] != -3 || same[1] != 1 || same[2] != 2 || same[3] != 2 || same[4] != 2 || same[5] != 42 || same[6] != 52 || same[7] != 199)
	{
		printf("Doesn't work for [2, 2, 1, -3, 42, 2, 199, 52] arr\n");
		is_correct = 0;
	}
	if (one[0] != 1)
	{
		printf("Doesn't work for [1] arr\n");
		is_correct = 0;
	}
	if (reverse[0] != 1 || reverse[1] != 2 || reverse[2] != 3 || reverse[3] != 4 || reverse[5] != 6 || reverse[6] != 7)
	{
		printf("Doesn't work for [7, 6, 5, 4, 3, 2, 1] arr\n");
		is_correct = 0;
	}
	if (is_correct)
		printf("ex08 is OK!\n");
}

int main()
{
	test8();
}
