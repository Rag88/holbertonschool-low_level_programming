#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *end_node;
	list_t *tmp;
	int i = 0;

	while (str[i] != '\0')
		i++;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	end_node->str = strdup(str);
	end_node->len = i;
	end_node->next = NULL;
	if (*head == NULL)
		*head = end_node;

	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = end_node;
	}
	return (end_node);
}
