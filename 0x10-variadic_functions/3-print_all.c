#include "variadic_functions.h"

/**
 * print_char - function that prints a char
 * @ch: char to be printed
 */

void print_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}

/**
 * print_int - function that prints an integer
 * @in: integer to be printed
 */

void print_int(va_list in)
{
	printf("%d", va_arg(in, int));
}

/**
 * print_float - function that prints a float number
 * @flo: number to be printed.
 */

void print_float(va_list flo)
{
	printf("%f", va_arg(flo, double));
}

/**
 * print_string - function that prints a string.
 * @str: string to be printed
 */

void print_string(va_list str)
{
	char *chak = va_arg(str, char*);

	if (chak == NULL)
		chak = "(nil)";
	printf("%s", chak);
}

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments.
 */

void print_all(const char * const format, ...)
{
	int i = 0, j;
	va_list list;
	char *sepa = "";

	lot wprint[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (wprint[j].op != NULL)
		{
			if (format[i] == *(wprint[j].op))
			{
				printf("%s", sepa);
				wprint[j].f(list);
				sepa = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
