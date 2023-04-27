#include "lists.h"

/**
 * add_node_end - Adds a node to the end of the list
 * @head: pointer to head
 * @str: data to be added in the pointer
 * Return: Address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp_node = *head;
	int i = 0;

	while (str[i])
		i++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp_node->next)
		temp_node = temp_node->next;

	temp_node->next = node;

	return (node);

}
