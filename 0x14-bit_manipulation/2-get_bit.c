#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number
 * @index: the number that indicates the bit
 * Return: bit 0 or 1, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* shift number index places right to find bit */
	bit = ((n >> index) & 1);

	return (bit);
}
