#include "lists.h"

/**
 * listint_len- function to get number of elements
 * in a linked list
 * @h: the head pointer
 * Return: numberof elements int a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
