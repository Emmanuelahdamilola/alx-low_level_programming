#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table pointer
 * Return: 0
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node_item;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node_item = ht->array[i];
		while (node_item != NULL)
		{
			printf("'%s': '%s'", node_item->key, node_item->value);
			if (node_item->next != NULL)
			{
				printf(", ");
			}
			node_item = node_item->next;
		}
		if (i != ht->size - 1 && ht->array[i + 1] != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
