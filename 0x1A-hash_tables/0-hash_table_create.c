#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: size of the array
 * Return: Pointer to the new hashtable
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *meza = NULL;
	hash_node_t **lst = NULL;
	unsigned long int i;

	meza = malloc(sizeof(hash_table_t));
	if (!meza)
		return (NULL);

	meza->size = size;
	lst = malloc(sizeof(hash_node_t *) * size);
	if (lst == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		lst[i] = NULL;
	meza->array = lst;
	return (meza);
}
