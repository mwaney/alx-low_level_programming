#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, even if it has a loop.
 * @head: A pointer to the first element of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const list_int_t *ptr1, *ptr2;
	size_t i;

	if (!head)
		exit(98);
	ptr1 = head;
	ptr2 = head->next;

	while (ptr2 && ptr2 != ptr1)
	{
		printf("[%p] %d\n", (void *) ptr1, ptr1->n);
		i++;
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;

		if (ptr1)
			ptr2 = ptr2->next;
	}
	printf("[%p] %d\n", (void *) ptr1, ptr1->n);
	i++;

	if (ptr1 == ptr2)
		printf("-> [%p] %d\n", (void *) ptr2, ptr2->n);
	return (i);
}
