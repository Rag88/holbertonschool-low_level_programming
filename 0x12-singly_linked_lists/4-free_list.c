#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: head node
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		next = (*current).next;
		free((*current).str);
		free(current);
		current = next;
	}
}
