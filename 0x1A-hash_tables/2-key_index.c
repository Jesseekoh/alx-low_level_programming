#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: is the key string
 * @size: size of array
 * Return: the key index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
