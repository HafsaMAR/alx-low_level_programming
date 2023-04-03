#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free the list and set the head to NULL
 * @head: pointer to pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == Null)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
