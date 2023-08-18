#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a specified index
 * @head: double pointer to head
 * @index: index to delete
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int count;

	count = 0;
	if (head == NULL)
	{
		return (-1);
	}
	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current = *head;
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	current = *head;
	prev = NULL;
	while (current)
	{
		if (count == index && prev != NULL)
			prev->next = current->next;
		if (count == index)
		{
			if (current->next != NULL)
				current->next->prev = prev;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		count++;
	}
}
