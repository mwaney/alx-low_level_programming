#include "lists.h"

/**
 * print_dlistint - function to print element in linkedlist
 * @h: pointer to the head of the linked list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count += 1;
		current = current->next;
	}
	return (count);
}
