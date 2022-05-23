#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the
 * beggining of a listint_t list
 * @head: Pointer to the header that starts the list
 * @n: Int to be added at the end
 *
 * Return: the adress of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	tmp = *head;
	while (tmp->next)
		tmp = tmp->next; /* iterates through the list */
	tmp->next = node;
	return (node);
}
