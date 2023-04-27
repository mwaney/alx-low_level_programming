#include "lists.h"

/**
 * add_node_end - Adds a node to the end of the list
 * @head: pointer to head
 * @str: data to be added in the pointer
 * Return: Address of new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *curr_node;
	int i = 0;

	while (str[i] != '\0')
		i++;
	if (head == NULL || str ==NULL)
		return(NULL);
	node = malloc(sizeof(list_t));
	if(!node)
		return (NULL);

	node->str = strdup(str);
	node->len = i;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	curr_node = *head;
	while (curr_node->next)
		curr_node = curr_node->next;
	curr_node->next = node;
	printf("[%d] %s\n", node->len, node->str);
	return (node);
}
