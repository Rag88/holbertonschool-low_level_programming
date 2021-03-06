#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @n: number of strings passed to the function
 * @separator: string to be printed between numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
		if ((i < (n - 1)) && separator)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
