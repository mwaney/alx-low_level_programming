#include "lists.h"

/**
 * sum_dlistint - function that sums all datat in linked list
 * @head: pointer to head of linked list
 * Return: Sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
