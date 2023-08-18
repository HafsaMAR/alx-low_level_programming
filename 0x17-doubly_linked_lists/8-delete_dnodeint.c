#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node at index
 * @head: pointer to pointer to head of list
 * @index: index of node
 * Return: 1 success and -1 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *next, *previous, *current;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		previous = *head;
		current = (*head)->next;
		if (current != NULL)
			current->prev = NULL;
		free(previous);
		*head = current;
		return (1);
	}

	for (current = *head; current != NULL; current = current->next)
	{

		previous = current;
		next = current->next;

		if (i == index)
		{
			previous->next = current->next;
			next->prev = current->prev;
			free(current);
			return (1);
		}
		i++;
	}
	return (-1);
}
