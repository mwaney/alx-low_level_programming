#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position
 * @head: pointer to the first element
 * @idx: index to insert
 * @n: integer in the node
 * Return: Address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *pointer = *head;
	listint_t *newnode = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	pointer = *head;
	while (i < idx - 1 && pointer)
	{
		pointer = pointer->next;
		i++;
	}
	if (!pointer)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = pointer->next;
	pointer->next = newnode;
	return (newnode);
}
