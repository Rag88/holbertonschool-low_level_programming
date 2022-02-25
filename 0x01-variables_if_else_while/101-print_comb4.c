#include <stdio.h>

/**
 *main - print 012 to 999 with no duplicate digits or combos: no 11, no 10 (01)
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;
	int cents;

	for (cents = '0'; cents <= '9'; cents++) /*increment cents*/
	{
		for (tens = (cents + 1); tens <= '9'; tens++) /*ten's cents+1*/
		{
			for (ones = (tens + 1); ones <= '9'; ones++) /*one's tens+1*/
			{
				putchar(cents);
				putchar(tens);
				putchar(ones);

				if (cents != '7' || tens != '8' || ones != '9') /*print commas*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
