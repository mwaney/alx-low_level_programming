#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a linked list
 * @head: pointer to the first element
 * Return: Sum or 0
 */

int sum_listint(listint_t *head)
{
	listint_t *pointer;
	int sum = 0;

	if (head == NULL)
		return (sum);
	pointer = head;
	while (pointer != NULL)
	{
		sum += (pointer)->n;
		pointer = (pointer)->next;
	}
	return (sum);
}
