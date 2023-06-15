#include "lists.h"

/**
 * get_dnodeint_at_index - function that prints element at a certain index
 * @head: pointer to head of list
 * @index: index of node
 * Return: nth node in the list or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (index == count)
			return (current);
		count += 1;
		current = current->next;
	}
	return (NULL);
}
