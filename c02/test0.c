#include "../../ex00/ft_strcpy.c"
#include <stdio.h>
#include "string_eq.c"

void test0()
{
	int is_correct = 1;
	char *src = "aaa";
	char dest[] = "bbb";
	char *ret = ft_strcpy(dest, src);
	if (!string_eq(dest, "aaa"))
	{
		printf("dest is not correct for src 'aaa' and dest 'bbb'\n");
		is_correct = 0;
	}
	if (!string_eq(src, "aaa"))
	{
		printf("src has changed for src 'aaa' and dest 'bbb'\n");
		is_correct = 0;
	}
	if (!string_eq(ret, "aaa"))
	{
		printf("return value is not correct for src 'aaa' and dest 'bbb'\n");
		is_correct = 0;
	}
	if (is_correct)
		printf("ex00 is OK!\n");
}

int main()
{
	test0();
}
