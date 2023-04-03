#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Add node at the end of the list
 * @head: pointer to pointer to list
 * @n: input int
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node, *current, *previous;
	last_node = malloc(sizeof(listint_t));
	if (last_node == NULL)
	{
		return(NULL);
	}
	previous = NULL;
	current = *head;
	while (current != NULL)
	{
		previous = current;
		current = current->next;
	}
	last_node->n = n;
	last_node->next = NULL;
	if (previous == NULL)
	{
		*head = last_node;
	}
	else
	{
		previous->next = last_node;
	}
	return(last_node);
}
