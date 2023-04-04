#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - print the elements of listint_t
 * @head: pointer to listint_t
 * Return: number of node or exit (98)
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *rest;
/*	int i = 0;*/

	current = head;
/*	if
	{
		exit (98);
	}
*/	rest = current->next;
	printf("[%p] %d\n",(void*)current, current->n);
	return(1 + print_listint_safe(rest));
}
