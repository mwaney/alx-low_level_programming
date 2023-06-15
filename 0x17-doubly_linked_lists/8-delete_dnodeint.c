#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes a node at a given index
 * @head: double pointer to head of list
 * @index: index of node to be deleted
 * Return: 1 on success -1 on Failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev_node = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current && count < index)
	{
		prev_node = current;
		current = current->next;
		count++;
	}
	if (current != NULL)
	{
		prev_node->next = current->next;
		if (current->next != NULL)
			current->next->prev = prev_node;
		free(current);
		return (1);
	}
	else
		return (-1);
}
