#include "lists.h"

/**
 * get_dnodeint_at_index - function return the nth node of a list
 * @head: pointer to head of doubly linked list
 * @index: index of the node returned
 * Return: address of node at index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
	}
	return (NULL);
}
