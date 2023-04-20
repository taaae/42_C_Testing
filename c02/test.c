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
		ft_strcpy(dest, src);
		assert_string_eq(dest, "aaa");
		assert_string_eq(src, "aaa");
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
	}
}

int main()
{
	test0();
	return 0;
}