#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in a hash table
 * @key: The key to calculate the index for
 * @size: The size of the hash table array
 *
 * Return: The index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashval;

	hashval = hash_djb2(key);

	return (hashval % size);
}
