#include "lists.h"

/**
 * add_node_end - Adds a node to the end of the list
 * @head: pointer to head
 * @str: data to be added in the pointer
 * Return: Address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *next_node, curr_node;

	next_node = malloc(sizeof(list_t));
	if(!next_node)
		return (NULL);

	next_node->str = strdup(str);
	if (!(next_node->str))
	{
		free(next_node);
		return (NULL);
	}
	next_node->len = 0;
	next_node->next = NULL;

	if (*head == NULL)
		*head = next_node;
	else
	{
		curr_node = *head;
		while (curr_node-> next)
			curr_node = curr_node->next;
		curr_node->next = next_node;
	}
	return (next_node);
}
