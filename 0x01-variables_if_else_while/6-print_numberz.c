#include <stdio.h>

/**
 *main - print all numbers of base 10
 *Return: Always 0 (Success)
 */
int main(void)

{
	int n = '0';

	while (n <= '9')
	{
		putchar (n);
		n++;
	}

	putchar ('\n');

	return (0);
}
