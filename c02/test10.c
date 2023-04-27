#include "../../ex10/ft_strlcpy.c"
#include <stdio.h>
#include "string_eq.c"

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
		dest[0] = 'f';
		assert(ft_strlcpy(dest, src, 0) == 3);
		assert(dest[0] == 'f');
	}
}

int main()
{
	test10();
	printf("ex10 is OK!\n");
}
