#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of d_linked list
 * @head: pointer to pointer to head of doubly linked list
 * @n: data
 * Return: address of new node or NULL in failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
