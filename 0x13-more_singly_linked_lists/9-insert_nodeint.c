#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a node
 * @head: pointer to pointer to listint_t
 * @idx: index at which insert the node
 * @n: data to insert
 * Return: address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *previous, *current;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}
	current = *head;
	if (idx == 0)
	{
		if (*head == NULL)
			return (NULL);
		*head = new_node;
		new_node->n = n;
		new_node->next = current;
	}
	while (i < idx && current)
	{
		previous = current;
		current = current->next;
		i++;
	}
	if (i != idx)
	{
		return (NULL);
	}
	previous->next = new_node;
	new_node->next = current;
	new_node->n = n;
	return (new_node);
}
