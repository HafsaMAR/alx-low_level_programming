#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of list_t
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
	{
		return(0);
	}
	printf("%d\n", h->n);
	return(1 + print_listint(h->next));
}
