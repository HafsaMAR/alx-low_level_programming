#include "lists.h"

/**
 * print_dlistint - function that prints the data of doubly linked list
 * @h: pointer to header of dlistint_t
 * Return: number of elements in doubly linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node;
	int i = 0;

	if (h == NULL)
		return (0);
	for (node = h; node != NULL; node = node->next)
	{
		rintf("%d\n", node->n);
		i++;
	}
	return (i);
}
