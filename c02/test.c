#include <assert.h>
#include "tasks.h"
#include <stdio.h>

void assert_string_eq(const char *first, const char *second)
{
	while (1)
	{
		assert(*first == *second);
		first++;
		second++;
		if (*first == '\0' && *second == '\0') {
			break;
		}
		if (*first == '\0' ^ *second == '\0') {
			assert(0);
		}
	}
}

void test0()
{
	{
		char *src = "aaa";
		char dest[] = "bbb";
		char *ret = ft_strcpy(dest, src);
		assert_string_eq(dest, "aaa");
		assert_string_eq(src, "aaa");
		assert_string_eq(ret, "aaa");
	}
	{
		char src[] = "test";
		char dest[6];
		ft_strcpy(dest, src);
		assert(dest[0] == 't');
		assert(dest[1] == 'e');
		assert(dest[2] == 's');
		assert(dest[3] == 't');
		assert(dest[4] == '\0');
		assert_string_eq(src, "test");
		// check output
	}
}

void test1()
{
	{
		char *src = "aaa";
		char dest[] = "bbbbb";
		char *ret = ft_strncpy(dest, src, 2);
		assert_string_eq(src, "aaa");
		assert_string_eq(dest, "aabbb");
		assert_string_eq(ret, "aabbb");
	}
	{
		char *src = "aaa";
		char dest[20];
		ft_strncpy(dest, src, 5);
		assert_string_eq(dest, "aaa");
		assert(dest[3] == '\0');
		assert(dest[4] == '\0');
	}
}

void test2()
{
	char *alpha = "asjkdfghksafasfuyagnsuyef";
	char *alphacap = "FJKHGKSFASFfghakshfAGSFH";
	char *nonalpha = "1243134_+_+_234";
	char *mixed = "adjlsfh234ahSAJDH34";
	char *last_non = "adsfgnadjksgn0";
	char *empty = "";
	assert(ft_str_is_alpha(alpha));
	assert(ft_str_is_alpha(alphacap));
	assert(!ft_str_is_alpha(nonalpha));
	assert(!ft_str_is_alpha(mixed));
	assert(!ft_str_is_alpha(last_non));
	assert(ft_str_is_alpha(empty));
}

void test3()
{
	char *numeric = "1234567890";
	char *not_numeric = "-afds+xd";
	char *mixed = "m1x3d";
	char *empty = "";
	assert(ft_str_is_numeric(numeric));
	assert(!ft_str_is_numeric(not_numeric));
	assert(!ft_str_is_numeric(mixed));
	assert(ft_str_is_numeric(empty));
}

void test4()
{
	char *lower = "loewr";
	char *caps = "CAPS";
	char *mixed = "adlsjfhKLDJSFH";
	char *weird = ")*(#&*()098357085)";
	char *empty = "";
	assert(ft_str_is_lowercase(lower));
	assert(!ft_str_is_lowercase(caps));
	assert(!ft_str_is_lowercase(mixed));
	assert(!ft_str_is_lowercase(weird));
	assert(ft_str_is_lowercase(empty));
}

void test5()
{
	char *lower = "loewr";
	char *caps = "CAPS";
	char *mixed = "adlsjfhKLDJSFH";
	char *weird = ")*(#&*()098357085)";
	char *empty = "";
	assert(!ft_str_is_uppercase(lower));
	assert(ft_str_is_uppercase(caps));
	assert(!ft_str_is_uppercase(mixed));
	assert(!ft_str_is_uppercase(weird));
	assert(ft_str_is_uppercase(empty));
}

void test6()
{
	char *normal = "iquhriu  kjasdhfklj fj";
	char weird[] = "wf\n";
	char *empty = "";
	assert(ft_str_is_printable(normal));
	assert(!ft_str_is_printable(weird));
	assert(ft_str_is_printable(empty));
}

int main()
{
	test0();
	test1();
	test2();
	test3();
	test4();
	test5();
	test6();
	return (0);
}
