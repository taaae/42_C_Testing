#include "../../ex07/ft_strupcase.c"
#include <stdio.h>
#include "string_eq.c"


void test7()
{
	char lower[] = "abc";
	char upper[] = "ABC";
	char others[] = "aGj24!!";
	char empty[] = "";
	assert_string_eq(ft_strupcase(lower), "ABC");
	assert_string_eq(ft_strupcase(upper), "ABC");
	assert_string_eq(ft_strupcase(others), "AGJ24!!");
	assert_string_eq(ft_strupcase(empty), "");
	assert_string_eq(lower, "ABC");
	assert_string_eq(upper, "ABC");
	assert_string_eq(others, "AGJ24!!");
	assert_string_eq(empty, "");
}

int main()
{
	test7();
	printf("ex07 is OK!\n");
}