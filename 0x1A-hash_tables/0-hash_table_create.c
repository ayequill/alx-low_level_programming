#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with
 * a given size
 * @size: the size of the table
 *
 * Description: Creates a hash table in memory with
 * a given size and the dynamically allocates memory
 * for the array
 *
 * Return: hash_table *
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	/* unsigned long int index = 0; */
	if (size == 0)
		return (NULL);
	hash_table = malloc(sizeof(hash_table_t));

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_node_t *));

	if (!hash_table->array)
	{
		free(hash_table);
			return (NULL);
	}
	return (hash_table);
}
