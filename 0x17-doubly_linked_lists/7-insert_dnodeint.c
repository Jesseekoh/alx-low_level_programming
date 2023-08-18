#include "lists.h"


/**
 * insert_dnodeint_at_index - insets a value at a give index in a linked list
 * @h: double head pointer
 * @idx: index to insert in
 * @n: value to insert
 * Return: address of new node or NULL if it fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new_node, *prev;

	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (*h == NULL && idx > 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n 

}
