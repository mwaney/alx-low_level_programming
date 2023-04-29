#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to the first element of list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *curr_node;

	while (head)
	{
		curr_node = head;
		head = head->next;
		free(curr_node);
	}
}
