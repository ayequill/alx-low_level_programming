#include "hash_tables.h"

/**
 * key_index - calculates and returns the index of
 * a given key
 *
 * @key: The key, string
 * @size: size of the table
 *
 * Description: Calculates the index of a key using the
 * djb2 algorithm and returns the index
 *
 * Return: Index to a key
 */

unsigned long int key_index(
	const unsigned char *key, unsigned long int size
)
{
	return (hash_djb2(key) % size);

}
