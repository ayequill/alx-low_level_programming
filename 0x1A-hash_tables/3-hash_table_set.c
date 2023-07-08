#include "hash_tables.h"

/**
 * hash_table_set - adds an element(key and pair)
 * to the hash table
 *
 * @ht: the hash table to insert the element
 * @key: key of the element to be added
 * @value: value for the key to be added
 *
 * Description: a function that adds keys and value pairs
 * to a hash table
 *
 * Return: 1 if success or 0 if it fails
 *
 */

int hash_table_set(
	hash_table_t *ht, const char *key, const char *value
)
{
	unsigned long int index;
	hash_node_t *current_node;
	hash_node_t *new_node;


	if (!ht || !key || key[0] == '\0')
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	current_node = ht->array[index];

	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			if (value)
			{
				current_node->value = strdup(value);
				return (1);
			}
		}
		current_node = current_node->next;
	}

	new_node = create_hash_node(key, value);


	if (!new_node)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
