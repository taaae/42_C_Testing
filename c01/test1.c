#include "../../ex01/ft_ultimate_ft.c"
#include <stdio.h>

void test1()
{
	int num = -1;
	int* ptr1 = &num;
	int** ptr2 = &ptr1;
	int*** ptr3 = &ptr2;
	int**** ptr4 = &ptr3;
	int***** ptr5 = &ptr4;
	int****** ptr6 = &ptr5;
	int******* ptr7 = &ptr6;
	int******** ptr8 = &ptr7;
	int********* ptr9 = &ptr8;

	ft_ultimate_ft(ptr9);
	if (num != 42)
	{
		printf("num is not 42!\n");
	}
	else
	{
		printf("ex01 is OK!\n");
	}
}

int main()
{
	test1();
}
