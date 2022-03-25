#include <stddef.h>

/**
 * int_index - function that searches for an integer
 * @array: array.
 * @size: size of array.
 * @cmp: the pointer function.
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
			if (cmp(array[i]) != 0)
				return (i);
			}
		}
	}
	return (-1);
}
