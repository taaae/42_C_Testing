#include <assert.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

void test0()
{
	int a = 10;
	ft_ft(&a);
	assert(a == 42);
}

void test1()
{
	int a = -1;
	int* ptr1 = &a;
	int** ptr2 = &ptr1;
	int*** ptr3 = &ptr2;
	int**** ptr4 = &ptr3;
	int***** ptr5 = &ptr4;
	int****** ptr6 = &ptr5;
	int******* ptr7 = &ptr6;
	int******** ptr8 = &ptr7;
	int********* ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);
	assert(a == 42);
}

void test2()
{
	int a = 10;
	int b = 12;
	ft_swap(&a, &b);
	assert(a == 12);
	assert(b == 10);
}

void test3()
{
	int	div;
	int	mod;
	int	a = 10;
	int b = 3;
	ft_div_mod(a, b, &div, &mod);
	assert(div == 3);
	assert(mod == 1);
}

void test4()
{
	int	a = 13;
	int	b = 3;
	ft_ultimate_div_mod(&a, &b);
	assert(a == 4);
	assert(b == 1);
}

void test5()
{
	char* str = "Ex05: Should display itself\n";
	char* str_old = str;
	ft_putstr(str);
	// check that doesn't modify str
	assert(str == str_old);
}

void test6()
{
	char* str = "12345";
	assert(ft_strlen(str) == 5);
}

void test7()
{
	int even[4] = {1, 2, 3, 4};
	int odd[3] = {1, 2, 3};
	int one[1] = {1};
	int empty[0] = {};

	ft_rev_int_tab(even, 4);
	ft_rev_int_tab(odd, 3);
	ft_rev_int_tab(one, 1);
	ft_rev_int_tab(empty, 0);

	assert(even[0] == 4);
	assert(even[1] == 3);
	assert(even[2] == 2);
	assert(even[3] == 1);

	assert(odd[0] == 3);
	assert(odd[1] == 2);
	assert(odd[2] == 1);

	assert(one[0] == 1);
}

void test8()
{
	int pos[5] = {4, 6, 1, 5, 3};
	// 1 3 4 5 6
	int neg[4] = {-2, -42, 0, -3};
	// -42 -3 -2 0
	int same[8] = {2, 2, 1, -3, 42, 2, 199, 52};
	// -3 1 2 2 2 42 54 199
	int one[1] = {1};
	// 1
	int empty[0] = {};
	int reverse[7] = {7, 6, 5, 4, 3, 2, 1};

	ft_sort_int_tab(pos, 5);
	ft_sort_int_tab(neg, 4);
	ft_sort_int_tab(same, 8);
	ft_sort_int_tab(one, 1);
	ft_sort_int_tab(empty, 0);
	ft_sort_int_tab(reverse, 7);


	assert(pos[0] == 1);
	assert(pos[1] == 3);
	assert(pos[2] == 4);
	assert(pos[3] == 5);
	assert(pos[4] == 6);

	assert(neg[0] == -42);
	assert(neg[1] == -3);
	assert(neg[2] == -2);
	assert(neg[3] == 0);

	assert(same[0] == -3);
	assert(same[1] == 1);
	assert(same[2] == 2);
	assert(same[3] == 2);
	assert(same[4] == 2);
	assert(same[5] == 42);
	assert(same[6] == 52);
	assert(same[7] == 199);

	assert(one[0] == 1);

	assert(reverse[0] == 1);
	assert(reverse[1] == 2);
	assert(reverse[2] == 3);
	assert(reverse[3] == 4);
	assert(reverse[4] == 5);
	assert(reverse[5] == 6);
	assert(reverse[6] == 7);
}

int main(void)
{
	test0();
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	test7();
	test8();
}