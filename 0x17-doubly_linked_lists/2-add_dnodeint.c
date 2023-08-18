#include "lists.h"
/**
 * add_dnodeint - function that adds node at the beginning of d_linkedlist
 * @head: pointer to pointer to head of doubly linked list
 * @n: data to add in the new node
 * Return: address of the new node else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (*head);
}
