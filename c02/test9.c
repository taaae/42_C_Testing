#include "../../ex09/ft_strcapitalize.c"
#include <stdio.h>
#include "string_eq.c"


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

	char str1[] = "hello, world!";
    char expected1[] = "Hello, World!";
    char *result1 = ft_strcapitalize(str1);
	assert_string_eq(expected1, result1);

	char str3[] = "TODAY IS A GOOD DAY";
    char expected30[] = "Today Is A Good Day";
	ft_strcapitalize(str3);
	assert_string_eq(expected30, str3);

	char str2[] = "";
    char expected20[] = "";
	ft_strcapitalize(str2);
	assert_string_eq(expected20, str2);

	char str4[] = "all lower case";
    char expected4[] = "All Lower Case";
    char *result4 = ft_strcapitalize(str4);
	assert_string_eq(result4, expected4);

	char str5[] = "ALL UPPER CASE";
    char expected5[] = "All Upper Case";
    char *result5 = ft_strcapitalize(str5);
	assert_string_eq(result5, expected5);

	char str6[] = "   white space    ";
    char expected6[] = "   White Space    ";
    char *result6 = ft_strcapitalize(str6);
	assert_string_eq(expected6, result6);
}


int main()
{
	test9();
	printf("ex09 is OK!\n");
}