#include "lists.h"

/**
 * pop_listint- deletes the head node of a listint_t linked list
 * @head: pointer to the first element
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *pointer;
	int res;

	if (*head == NULL || head == NULL)
		return (0);
	pointer = *head;
	*head = (*head)->next;
	res = pointer->n;
	free(pointer);
	return (res);
}
