#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, even if it has a loop.
 * @head: A pointer to the first element of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *loop_start = NULL;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current->next >= current)
		{
			loop_start = current->next;
			break;
		}

		current = current->next;
	}

	if (loop_start != NULL)
	{
		printf("-> [%p] %d\n", (void *)loop_start, loop_start->n);
		current = current->next;
		while (current != loop_start)
		{
			count++;
			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
		}
	}

	return (count);
}
