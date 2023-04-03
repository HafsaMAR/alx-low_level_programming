#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to pointer to listint_t
 * Return: n or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;

	temp = malloc(sizeof(listint_t));
	if (!head)
	{
		return (0);
	}
	temp->n = (*head)->n;
	*head = (*head)->next;
	return (temp->n);
}
