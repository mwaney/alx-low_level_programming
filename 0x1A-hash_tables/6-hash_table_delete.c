#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: The hash table to delete and free
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur_node, *next_node;
	unsigned long int index = 0;

	if (ht == NULL)
		return;

	if ((ht->array) == NULL)
	{
		free(ht);
		return;
	}

	while (index < ht->size)
	{
		cur_node = (ht->array)[index];
		while (cur_node)
		{
			next_node = cur_node->next;
			if (cur_node->key)
				free(cur_node->key);
			if (cur_node->value)
				free(cur_node->value);
			cur_node->key = NULL;
			cur_node->value = NULL;
			free(cur_node);
			cur_node = next_node;
		}
		index = index + 1;
	}
	free(ht->array);
	free(ht);
}
