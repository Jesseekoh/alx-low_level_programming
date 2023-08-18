#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of doubly linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
