#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head node of linked list
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		++counter;
		h = h->next;
	}
	return (counter);
}
