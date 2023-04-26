#include "../../ex08/ft_strlowcase.c"
#include <stdio.h>
#include "string_eq.c"


void test8()
{
	char lower[] = "abc";
	char upper[] = "ABC";
	char others[] = "aGj24!!";
	char empty[] = "";
	assert_string_eq(ft_strlowcase(lower), "abc");
	assert_string_eq(ft_strlowcase(upper), "abc");
	assert_string_eq(ft_strlowcase(others), "agj24!!");
	assert_string_eq(ft_strlowcase(empty), "");
	assert_string_eq(lower, "abc");
	assert_string_eq(upper, "abc");
	assert_string_eq(others, "agj24!!");
	assert_string_eq(empty, "");
}

int main()
{
	test8();
	printf("ex08 is OK!\n");
}