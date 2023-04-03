#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - return the sum of the list's datas
 * @head: pointer to listint_t
 * Return: sum of 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
