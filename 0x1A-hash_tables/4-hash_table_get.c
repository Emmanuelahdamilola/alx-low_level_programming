#include "hash_tables.h"

/**
 * *hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table pointer to be looking for
 * @key: the key to be looking for
 * Return: retruns that values asssociated with the element,
 * or NULL if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node_item;

	if (ht == NULL || key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	node_item = ht->array[index];

	while (node_item != NULL)
	{
		if (strcmp(node_item->key, key) == 0)
		{
			return (node_item->value);
		}
		node_item = node_item->next;
	}

	return (NULL);
}

