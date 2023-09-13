#include "hash_tables.h"
/**
 * hash_table_set - adds item to hash table
 * @ht: hashtable
 * @key: key
 * @value: value
 * Return: 1 if success; 0 if failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;

	if (!(key || ht))
		return (0);
	index = key_index((const unsigned char *) key, ht->size);

	if (!ht->array[index])
	{
		item = create_item(key, value);

		if (item == NULL)
			return (0);

		ht->array[index] = item;
		return (1);
	}
	else if (strcmp(ht->array[index]->key, key) == 0)
	{
		if (modify_value(ht, index, value) == 0)
			return (0);

		return (1);
	}
	/* Handle collision */
	if (handle_collision(ht, key, value) == 1)
		return (1);

	return (0);
}

/**
 * create_item - creates a new item / element in the hash table
 * @key: unique key
 * @value: value associated with key
 * Return: the new hash_node or NULL
*/
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));

	item->key = malloc(strlen(key) + 1);
	item->value = malloc(strlen(value) + 1);
	if (item->key == NULL || item->value == NULL)
		return (NULL);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}


/**
 * handle_collision - handle collision
 * @ht: Hash Table
 * @key: the key associated with the value
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int handle_collision(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	index = key_index((const unsigned char *)key, ht->size);


	/* create new node */
	new = create_item(key, value);
	if (!new)
		return (0);

	/* insect new_node to the head of the collision chain */
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}

/**
 * modify_value - handle collision
 * @ht: Hash Table
 * @index: the index associated with the element to modify
 * @value: the new value
 * Return: 1 if it succeeded, 0 otherwise
 */
int modify_value(hash_table_t *ht, unsigned long int index, const char *value)
{

	free(ht->array[index]->value);

	/* Allocate new memmory address */
	ht->array[index]->value = malloc((strlen(value) + 1));

	if (!ht->array[index]->value)
		return (0);

	strcpy(ht->array[index]->value, value);
	return (1);
}

