#include "lists.h"


/**
 * sum_dlistint - returns sum of all data of list
 * @head: double pointer to head
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current;

	if (head == NULL)
		return (sum);
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
