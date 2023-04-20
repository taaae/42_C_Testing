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

int main()
{
	test0();
	test1();
	return 0;
}