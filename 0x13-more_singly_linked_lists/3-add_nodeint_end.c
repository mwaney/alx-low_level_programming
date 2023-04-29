#include "lists.h"
/**
 * add_nodeint_end - add node to the end
 * @head: pointer to the first node
 * @n: integer stored in the node
 * Return:address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;
	listint_t **ptr = head;

	last_node = malloc(sizeof(listint_t));
	if (!last_node)
		return (NULL);
	last_node->n = n;
	last_node->next = NULL;

	if (*head == NULL)
		*head = last_node;
	else
	{
		while (*ptr != NULL)
		{
			ptr = &(*ptr)->next;
		}
		*ptr = last_node;
	}
	return (last_node);
}
