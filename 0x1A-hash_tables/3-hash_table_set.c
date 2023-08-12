#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table
 * @key: the hash table key
 * @value: the value of the associated with the key
 * Return: 1 if it succeeded, or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_item;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
	{
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	new_item = malloc(sizeof(hash_node_t));

	if (new_item == NULL)
	{
		return (0);
	}

	new_item->key = strdup(key);
	if (new_item->key == NULL)
	{
		free(new_item);
		return (0);
	}

	new_item->value = strdup(value);
	if (new_item->value == NULL)
	{
		free(new_item->key);
		free(new_item);
		return (0);
	}

	new_item->next = ht->array[index];
	ht->array[index] = new_item;

	return (1);
}

