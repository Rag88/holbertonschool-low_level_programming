#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node at the beggining of a list_t list.
 * @head: head node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node;
	int i = 0;

	while (str[i] != '\0')
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	new_node->next = *head;
	new_node->len = i;
	*head = new_node;

	return (new_node);
}
