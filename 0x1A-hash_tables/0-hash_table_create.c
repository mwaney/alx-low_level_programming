#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the array
 * Return: Pointer to new Hash Table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int i;
	hash_node_t **lst = NULL;

	hash_t = malloc(sizeof(hash_table_t));
	if (!hash_t)
	{
		return (NULL);
	}

	hash_t->size = size;
	lst = malloc(size * sizeof(hash_node_t *));
	if (lst == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		lst[i] = NULL;
	}
	hash_t->array = lst;
	return (hash_t);

}
