#include <assert.h>

int string_eq(const char *first, const char *second)
{
	while (1)
	{
		if (*first == '\0' && *second == '\0') {
			return(1);
		}
		if (*first != *second)
			return (0);
		first++;
		second++;
		if (*first == '\0' ^ *second == '\0') {
			return (0);
		}
	}
}

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
