#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key to find
 * Return:  the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (!ht->array[index])
		return (NULL);

	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);

	ptr = ht->array[index]->next;

	while (ptr)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);

		ptr = ptr->next;
	}

	return (NULL);
}
