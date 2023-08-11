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
	hash_table_t *new_table;
	if (size == 0)
	{
		return (NULL);
	}

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return NULL;
	}

	new_table->size = size;
	new_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	return new_table;
}
