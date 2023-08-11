#include "hash_tables.h"
#define INITIAL_CAPACITY 16

/**
 * *hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: returns a pointer to the newly created hash table
 * If something went wrong, function should be return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
	{
		return (NULL);
	}

	table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
