#include "lists.h"

/**
 * print_listint_safe - Prints a linked list, even if it has a loop.
 * @head: A pointer to the first element of the list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr1, *ptr2;
	size_t i = 0;

	if (!head)
		exit(98);
	ptr1 = head;
	ptr2 = head;

	while (ptr1 && ptr2 && ptr2->next)
	{
		printf("[%p] %d\n", (void *) ptr1, ptr1->n);
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;
		i++;

		if (ptr1 == ptr2)
		{
			printf("[%p] %d\n", (void *)ptr1, ptr1->n);
			ptr1 = head;
			while (ptr1 != ptr2)
			{
				printf("[%p] %d\n", (void *)ptr1, ptr1->n);
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
				i++;
			}
			printf("-> [%p] %d\n", (void *) ptr1, ptr1->n);
			return (i);
		}
	}
	printf("[%p] %d\n", (void *)ptr1, ptr1->n);
	i++;

	return (i);
}
