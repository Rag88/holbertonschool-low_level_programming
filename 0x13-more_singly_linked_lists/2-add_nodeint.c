#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the
 * beggining of a listint_t list
 * @head: Pointer to the header that starts the list
 * @n: Int to be added
 *
 * Return: the adress of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
