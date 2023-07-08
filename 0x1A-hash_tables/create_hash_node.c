#include "hash_tables.h"

/**
* create_hash_node - create a new hash_node_t node
* @key: string
* @value: string
*
* Description: creates a new hash_node_t and sets key
* and value
*
* Return: hash node
*/

hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	if (!key || key[0] == '\0')
		return (NULL);

	node = malloc(sizeof(hash_node_t));

	if (!node)
		return (NULL);

	node->key = strdup(key);

	if (!node->key)
	{
		free(node);
		return (NULL);
	}

	if (value)
	{
		node->value = strdup(value);
		if (!node->value)
		{
			free(node->key);
			free(node);
			return (NULL);
		}
	}
	else
	{

		node->value = NULL;
	}
	node->next = NULL;


	return (node);
}
