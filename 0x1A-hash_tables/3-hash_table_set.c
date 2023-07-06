#include "hash_tables.h"

/**
 * create_node - creates and inserts node into hash table
 * @ht: hash table
 * @key: key that will be used
 * @value: value associated with the key
 * @index: point to insert at hash table
 * Return: 1 if success, 0 if fail
 */
int create_node(hash_table_t *ht, const char *key, const char *value,
		unsigned long int index)
{
	hash_node_t *node = NULL;
	char *dup_key, *dup_val;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	dup_key = strdup(key);
	if (!dup_key)
	{
		free(node);
		return (0);
	}

	dup_val = strdup(value);
	if (!dup_val)
	{
		free(dup_key);
		free(node);
		return (0);
	}

	node->key = dup_key;
	node->value = dup_val;

	if ((ht->array)[index] == NULL)
		node->next = NULL;
	else
		node->next = (ht->array)[index];
	(ht->array)[index] = node;

	return (1);
}

/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key that will be used
 * @value: The value associated with the key
 * Return: 1 if success, 0 if fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	char *dup_val;

	if (!ht || !(ht->array) || !key || !strlen(key) || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	node = (ht->array)[index];
	while (node && (strcmp(key, node->key) != 0))
		node = node->next;
	if (node)
	{
		dup_val = strdup(value);
		if (!dup_val)
			return (0);
		if (node->value)
			free(node->value);
		node->value = dup_val;
		return (1);
	}

	return (create_node(ht, key, value, index));
}
