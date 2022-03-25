#include <stddef.h>

/**
 * array_iterator - function that executes a function given
 * as a parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @action: pointer to function that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
