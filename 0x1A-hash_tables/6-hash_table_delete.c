#include "hash_tables.h"

/**
 * hash_table_delete - the function that delete a hash table.
 * @ht: the hash table
 * Return: 0 (success)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node_item;
	hash_node_t *next;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		node_item = ht->array[i];
		while (node_item != NULL)
		{
			next = node_item->next;
			free(node_item->key);
			free(node_item->value);
			free(node_item);
			node_item = next;
		}
	}

	free(ht->array);
	free(ht);
}

