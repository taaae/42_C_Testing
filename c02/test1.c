#include "../../ex01/ft_strncpy.c"
#include <stdio.h>
#include "string_eq.c"

void test1()
{
	int is_correct = 1;
	{
		char *src = "aaa";
		char dest[] = "bbbbb";
		char *ret = ft_strncpy(dest, src, 2);
		if (!string_eq(dest, "aabbb"))
		{
			printf("dest is not correct for src 'aaa', dest 'bbbbb' and n=2\n");
			is_correct = 0;
		}
		if (!string_eq(src, "aaa"))
		{
			printf("src has changed for src 'aaa', dest 'bbbbb' and n=2\n");
			is_correct = 0;
		}
		if (!string_eq(ret, "aabbb"))
		{
			printf("return value is not correct for src 'aaa', dest 'bbbbb' and n=2\n");
			is_correct = 0;
		}
	}
	{
		char *src = "aaa";
		char dest[20];
		ft_strncpy(dest, src, 5);
		if (!string_eq(dest, "aaa"))
		{
			printf("dest is not correct for src 'aaa', empty dest with 20 elems and n=5\n");
			is_correct = 0;
		}
		if (dest[3] != '\0' || dest[4] != '\0')
		{
			printf("dest[3] and dest[4] should be = '\\0' for src 'aaa', empty dest with 20 elems and n=5\n");
			is_correct = 0;
		}
	}
	if (is_correct)
		printf("ex01 is OK!\n");
}

int main()
{
	test1();
}