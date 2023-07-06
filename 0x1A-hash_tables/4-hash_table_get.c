#include "hash_tables.h"

/**
 * hash_table_get - Gets a value associated with a key
 * @ht: The hash table
 * @key: The key to the value
 * Return: The value associated with the element or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	item = (ht->array)[index];
	while (item && strcmp(item->key, key) != 0)
	{
		item = item->next;
	}
	if (!item)
	{
		return (NULL);
	}
	else
	{
		return (item->value);
	}
}
