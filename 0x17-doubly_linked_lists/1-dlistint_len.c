#include "lists.h"

/**
 * dlistint_len - function to print the length of a linked list
 * @h: head of the list
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
