#include "lists.h"

/**
 * find_listint_loop - Finds loop in a linked list
 * @head: A pointer to the first element of the list
 *
 * Return: The address of node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1 = head, *ptr2 = head;

	if (!head)
		return (NULL);
	while (ptr1 && ptr2 && ptr2->next)
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;

		if (ptr1 == ptr2)
		{
			ptr1 = head;

			while (ptr1 != ptr2)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}

			return (ptr2);
		}
	}

	return (NULL);
}

