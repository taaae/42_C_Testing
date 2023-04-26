#include "../../ex02/ft_str_is_alpha.c"
#include <stdio.h>
#include "string_eq.c"

void test2()
{
	int is_correct = 1;
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
	if (!ft_str_is_alpha(alpha)) {
		printf("string 'asjkdfghksafasfuyzagnsuyef' should be alpha\n");
		is_correct = 0;
	}
		if (!ft_str_is_alpha(alphacap)) {
		printf("string 'FJKHAGKSFASFAGSFHZ' should be alpha\n");
		is_correct = 0;
	}
		if (ft_str_is_alpha(nonalpha)) {
		printf("string '1243134_+_+_234' should not be alpha\n");
		is_correct = 0;
	}
		if (ft_str_is_alpha(mixed)) {
		printf("string 'adjlsfh234ahSAJDH34' not should be alpha\n");
		is_correct = 0;
	}
		if (ft_str_is_alpha(last_non)) {
		printf("string 'adsfgnadjksgn0' not should be alpha\n");
		is_correct = 0;
	}
		if (!ft_str_is_alpha(empty)) {
		printf("empty string should be alpha\n");
		is_correct = 0;
	}
	if (is_correct)
		printf("ex02 is OK!\n");
}

int main()
{
	test2();
}