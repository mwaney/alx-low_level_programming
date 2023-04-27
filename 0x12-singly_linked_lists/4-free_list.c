#include "lists.h"

/**
 * free_list - function to free list
 *
 * @head: pointer to head
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *curr_node;

	while (head != NULL)
	{
		curr_node = head;
		head = head->next;
		free(curr_node->str);
		free(curr_node);
	}
}
