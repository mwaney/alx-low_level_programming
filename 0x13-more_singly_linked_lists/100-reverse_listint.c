#include "lists.h"


/**
 * reverse_listint - reverses a linked list
 * @head: pointer to first element of list
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *next_node = NULL, *curr_node = *head;

	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		curr_node->next = prev_node;
		prev_node = curr_node;
		curr_node = next_node;
	}
	*head = prev_node;
	return (*head);
}
