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
	int t;

	temp = malloc(sizeof(listint_t));
	if (!head || !(*head))
	{
		return (0);
	}
	temp = *head;
	t = temp->n;
	*head = (*head)->next;
	free(temp);
	return (t);
}
