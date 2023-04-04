#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete the indexed node
 * @head: pointerto pointer to listint_t
 * @index: the node to delete
 * Return: 1 in success or -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *current;
	unsigned int i = 0;

	current = *head;
	if (!current || (index == 0 && !current->next))
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	previous->next = current->next;
	free(current);
	return (1);
}
