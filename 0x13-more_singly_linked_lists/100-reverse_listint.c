#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - Reverse listint_t
 * @head: pointer to pointer to list
 * Return: NULL or the pointer to the head of list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rest, *previous;

	if (!(*head) || (*head)->next == NULL)
		return(NULL);
	previous = *head;
	rest = previous->next;
	reverse_listint(&rest);
	previous = *head;
	previous->next->next = previous;
	previous->next = NULL;
	*head = rest;
	return(*head);
}
