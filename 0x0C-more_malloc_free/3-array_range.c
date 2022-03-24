#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: The minimum number
 * @max: The maximum number
 *
 * Return: a pointer to new array
 */

int *array_range(int min, int max)
{
	int i, s, *p;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	p = malloc(s * sizeof(int));
	if (!p)
		return (NULL);

	for (i = 0; i < s; i++)
		p[i] = min++;
	return (p);
}
