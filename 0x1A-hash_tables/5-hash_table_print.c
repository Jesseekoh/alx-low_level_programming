#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	int sep;

	if (!ht)
		return;

	sep = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];

		while (ptr)
		{
			if (sep)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			sep = 1;
			ptr = ptr->next;

		}
	}
	printf("}\n");
}
