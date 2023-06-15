#include "lists.h"

/**
 * free_dlistint - function to free memory allocated to nodes
 * @head: pointer to head of list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
