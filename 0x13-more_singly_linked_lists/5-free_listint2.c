#include "lists.h"

/**
 * free_listint2- function that frees a list
 * @head: pointer to the first elementof a list
 * Return Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *curr_node;

	while (*head)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
	}
	*head = NULL;
}
