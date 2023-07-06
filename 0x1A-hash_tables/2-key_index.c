#include "hash_tables.h"
/**
 * key_index - Function that gives the index of a key
 * @key: a key which will help get its index
 * @size: the size of the array of the hash table
 * Return: index at which the key/value pair should
 * be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size == 0)
	{
		return (size);
	}
	return (hash_djb2(key) % size);
}
