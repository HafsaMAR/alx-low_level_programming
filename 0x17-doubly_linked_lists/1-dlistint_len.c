#include "lists.h"


/**
 * dlistint_len - function that caluclates the number of element in dlist
 * @h: pointer to head of doubly linked list
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node;
	int i = 0;

	if (h == NULL)
		return (0);
	for (node = h; node != NULL; node = node->next)
	{
		i++;
	}
	return (i);
}
