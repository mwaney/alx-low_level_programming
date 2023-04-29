#include "lists.h"

/**
 * get_nodeint_at_index- function to get index of node
 * @head: pointer to first element of list
 * @index: index of node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *pointer = head;

	while (pointer)
	{
		if (index == i)
			return (pointer);
		i++;
		pointer = pointer->next;
	}
	return (NULL);
}
