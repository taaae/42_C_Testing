#include <assert.h>
#include "tasks.h"
#include <stdio.h>

void assert_string_eq(const char *first, const char *second)
{
	while (1)
	{
		if (*first == '\0' && *second == '\0') {
			break;
		}
		assert(*first == *second);
		first++;
		second++;
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
	char *alpha = "asjkdfghksafasfuyzagnsuyef";
	char *alphacap = "FJKHAGKSFASFAGSFHZ";
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
	char *lower = "lowerza";
	char *caps = "CAPSZ";
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

void test9()
{
	char example[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char expected[] = "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un";
	assert_string_eq(ft_strcapitalize(example), example);
	assert_string_eq(example, expected);
	assert_string_eq(ft_strcapitalize(example), expected);

	char another[] = "a b c d 1d !g	t";
	char *expected2 = "A B C D 1d !G	T";
	assert_string_eq(ft_strcapitalize(another), expected2);
	assert_string_eq(another, expected2);

	char another2[] = "AbCd 2AB 3abc dEFGd 23c C c-C-c2Av";
	char *expected3 = "Abcd 2ab 3abc Defgd 23c C C-C-C2av";
	assert_string_eq(ft_strcapitalize(another2), expected3);
	assert_string_eq(another2, expected3);
}

void test10()
{
	{
		char dest[20];
		char src[] = "Hello, world!";
		unsigned int size = ft_strlcpy(dest, src, 6);
		assert(size == 13);
		assert(dest[5] == '\0');
		assert_string_eq(dest, "Hello");
	}
	{
		char *src = "abc";
		char dest[10];
		dest[4] = 'e';
		assert(ft_strlcpy(dest, src, 3) == 3);
		assert_string_eq(dest, "ab");
		assert(dest[2] == '\0');
		assert(dest[4] == 'e');
	}
	{
		char *src = "ab";
		char dest[10];
		dest[3] = 'e';
		dest[4] = 'g';
		assert(ft_strlcpy(dest, src, 10) == 2);
		assert_string_eq(dest, "ab");
		assert(dest[2] == '\0');
		assert(dest[3] == 'e');
		assert(dest[4] == 'g');
	}
	{
		char *src = "";
		char dest[10];
		dest[0] = 'a';
		assert(ft_strlcpy(dest, src, 10) == 0);
		assert(dest[0] == '\0');
	}
	{
		char *src = "abc";
		char dest[10];
		dest[0] = 'a';
		assert(ft_strlcpy(dest, src, 0) == 3);
		assert(dest[0] == 'a');
	}
}

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
}

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
	test0();
	printf("0 is ok\n");
	test1();
	printf("1 is ok\n");
	test2();
	printf("2 is ok\n");
	test3();
	printf("3 is ok\n");
	test4();
	printf("4 is ok\n");
	test5();
	printf("5 is ok\n");
	test6();
	printf("6 is ok\n");
	test7();
	printf("7 is ok\n");
	test8();
	printf("8 is ok\n");
	test9();
	printf("9 is ok\n");
	test10();
	printf("10 is ok\n");
	test11();
	test12();
	return (0);
}
