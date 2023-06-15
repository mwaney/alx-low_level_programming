#include "lists.h"

/**
 * add_dnodeint_end - function to add node at the end of list
 * @head: pointer to pointer to the head
 * @n: the data to be contained in the node
 * Return: Address of new node or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *end_node = malloc(sizeof(dlistint_t));

	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;
	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = end_node;
		end_node->prev = current;
	}
	return (end_node);
}
