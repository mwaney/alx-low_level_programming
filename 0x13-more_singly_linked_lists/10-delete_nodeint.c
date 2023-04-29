#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node 
 * @head: pointer to first elent of linked list
 * @index: index of node to be deleted
 * Return: 1 on success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *right_ptr;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	i = 0;
	right_ptr = *head;
	while (i < index - 1 && right_ptr != NULL)
	{
		right_ptr = right_ptr->next;
		i++;
	}
	if (!right_ptr || !(right_ptr->next))
		return (-1);
	ptr = right_ptr->next;
	right_ptr->next = ptr->next;
	free(ptr);
	return (1);

}
