#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free the listint_t
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
