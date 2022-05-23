#include "lists.h"

/**
 * listint_len - function that prints the number of elements in a linked list
 *
 * @h: the adress of a header of a list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
