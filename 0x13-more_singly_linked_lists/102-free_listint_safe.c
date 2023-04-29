#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first elemnt in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *curr, *nxt;

	if (h == NULL || *h == NULL)
		return (0);

	curr = *h;

	while (curr != NULL)
	{
		count++;
		nxt = curr->next;
		free(curr);

		if (nxt >= curr)
			break;

		curr = nxt;
	}

	*h = NULL;

	return (count);
}

