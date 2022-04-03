#include <stdio.h>

/**
 * main - code to print the first 50 Fibonacci Numbers
 * Return: 0
 */
int main(void)
{
	long i;
	int n = 98;
	long t1 = 1, t2 = 2;
	unsigned long nextTerm = t1 + t2;

	printf("%li, %li, ", t1, t2);

	for (i = 3; i <= n; ++i)
	{
		if (i < n)
		{
			printf("%lu, ", nextTerm);
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1 + t2;
		}
		else
			printf("%lu", nextTerm);
	}
	printf("\n");
	return (0);
}
