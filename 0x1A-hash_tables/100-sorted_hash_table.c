#include "hash_tables.h"
/**
 * shash_table_create - Function that creates sorted hash table
 * @size: size of the hash table
 * Return: Pointer to new Hash Table or NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_t;
	unsigned long int i;

	shash_t = malloc(sizeof(shash_table_t));
	if (!shash_t)
		return (NULL);
	shash_t->size = size;
	shash_t->shead = NULL;
	shash_t->stail = NULL;
	shash_t->array = malloc(sizeof(shash_node_t) * size);
	if (shash_t->array == NULL)
	{
		free(shash_t);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		shash_t->array[i] = NULL;
	}
	return (shash_t);

}

/**
 * shash_table_set - Inserts an element to a sorted hash table.
 * @ht: the sorted hash table.
 * @key: The key to add.
 * @value: The value associated with key.
 * Return: 1 on Success otherwise 0.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *item;
	unsigned long int index;
	char *val_cpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	val_cpy = strdup(value);
	if (!val_cpy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->shead;

	while (item)
	{
		if (strcmp(item->key, key) == 0)
		{
			free(item->value);
			item->value = val_cpy;
			return (1);
		}
		item = item->snext;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
	{
		free(val_cpy);
		return (0);
	}

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(val_cpy);
		free(new_node);
		return (0);
	}

	new_node->value = val_cpy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		item = ht->shead;

		while (item->snext && strcmp(item->snext->key, key) < 0)
			item = item->snext;

		new_node->sprev = item;
		new_node->snext = item->snext;

		if (item->snext == NULL)
			ht->stail = new_node;
		else
			item->snext->sprev = new_node;

		item->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key in a sorted hash table
 * @ht: The sorted hash table
 * @key: The key to search for
 * Return: The value associated with the key, or NULL if key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (index >= ht->size)
		return (NULL);

	current_node = ht->shead;

	while (current_node != NULL && strcmp(current_node->key, key) != 0)
		current_node = current_node->snext;

	if (current_node == NULL)
		return (NULL);
	else
		return (current_node->value);
}

/**
 * shash_table_print - Prints the key-value pairs of a sorted hash table
 * @ht: The sorted hash table to print
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;
	char is_printed = 0;

	if (!ht || !(ht->array))
		return;
	printf("{");
	current_node = ht->shead;
	while (current_node)
	{
		if (is_printed == 1)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		is_printed = 1;
		current_node = current_node->snext;
	}
	printf("}\n");

}

/**
 * shash_table_print_rev - Prints the key-value pairs of a
 * sorted hash table in reverse
 * @ht: The sorted hash table to print
 * Return: Nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;
	char is_printed = 0;

	if (!ht || !(ht->array))
		return;
	printf("{");
	current_node = ht->stail;

	while (current_node)
	{
		if (is_printed == 1)
			printf(", ");
		printf("'%s': '%s'", current_node->key, current_node->value);
		is_printed = 1;
		current_node = current_node->sprev;
	}
	printf("}\n");

}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table to delete
 * Return: Nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head_ptr = ht;
	shash_node_t *node, *item;

	if (!ht)
		return;

	node = ht->shead;
	while (node != NULL)
	{
		item = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = item;
	}

	free(head_ptr->array);
	free(head_ptr);
}
