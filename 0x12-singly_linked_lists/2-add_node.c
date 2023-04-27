#include "lists.h"
#include <string.h>
/**
 * add_node- function that creates new nodes
 * @head: pointer to head
 * @str: data in the node
 * Return: address of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i = 0;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	while (str[i] != '\0')
		i++;

	node->len = i;
	node->next = *head;
	*head = node;
	return (node);
}
