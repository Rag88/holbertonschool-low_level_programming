#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last = last * -1;

	_putchar('0' + last);

	return (last);
}
