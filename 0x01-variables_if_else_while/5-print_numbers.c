#include <stdio.h>

/**
 *main - print all numbers of base 10
 *Return: Always 0 (Success)
 */
int main(void)

{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)

	putchar (ch);
	putchar ('\n');

	return (0);
}
