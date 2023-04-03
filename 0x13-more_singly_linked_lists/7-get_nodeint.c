#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node
 * @head: pointer to list
 * @index: input int
 * Return: the nth node or Null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	current = head;
	while (i < index)
	{
		if (!current)
		{
			return (NULL);
		}
		current = current->next;
		i++;
	}
	return (current);
}
