#include <stdio.h>

/**
 *main - print the lowercase alphabet in reverse
 *Return: Always 0 (Success)
 */
int main(void)

{
	char ahpla = 'z';

	while (ahpla >= 'a')
	{
		putchar (ahpla);
		ahpla--;
	}

	putchar ('\n');

	return (0);
}
