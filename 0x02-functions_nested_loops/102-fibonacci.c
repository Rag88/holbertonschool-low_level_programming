#include <stdio.h>

/**
 * main - code to print the first 50 Fibonacci Numbers
 * Return: 0
 */
int main(void)
{
	int counter;
	int countto = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (countto / 2); counter++)
	{
		printf("%li, %li, ", a, b);
		a += b;
		b += a;
	}
	printf("\n");

	return (0);
}
