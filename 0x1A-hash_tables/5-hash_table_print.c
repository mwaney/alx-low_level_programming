#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: The hash table to be printed
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *val;
	unsigned long int i;
	char is_printed = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		val = ht->array[i];
		while (val != NULL)
		{
			if (is_printed == 1)
				printf(", ");
			printf("'%s': '%s'", val->key, val->value);
			is_printed = 1;
			val = val->next;
		}
	}
	printf("}\n");
}
