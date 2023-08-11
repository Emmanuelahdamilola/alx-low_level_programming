#include "hash_tables.h"

/**
 * key_index - function that gives the index of a key
 * @key: the hash table key
 * @size: the size of the array of the hash table
 *Return: returns index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int key_index;

	hash_value = hash_djb2(key);
	key_index = hash_value % size;

	return (key_index);
}

