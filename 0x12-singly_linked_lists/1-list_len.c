#include "lists.h"

/**
 * list_len - function to get length of elements in a list
 * @h: head pointer
 * Return: number of elements in a list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
