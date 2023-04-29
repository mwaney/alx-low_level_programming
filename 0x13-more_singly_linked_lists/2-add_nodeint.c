#include "lists.h"

/**
 * add_nodeint- adds node at the begining of a list
 * @head: pointer to fist node in a list
 * @n: content of new node
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
