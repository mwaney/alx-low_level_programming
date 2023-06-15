#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert node at index
 * @h: double pointer to head of list
 * @idx: index at which to insert node
 * @n: data to insert at node
 * Return: Pointer to newly inserted node on success or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	dlistint_t *prev_node = NULL;
	unsigned int count = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (*h);
	}

	while (current && count < idx)
	{
		prev_node = current;
		current = current->next;
		count++;
	}
	if (count == idx)
	{
		prev_node->next = new_node;
		new_node->prev = prev_node;
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		return (new_node);
	}
	else
	{
		free(new_node);
		return (NULL);
	}
}
