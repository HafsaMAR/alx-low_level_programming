#include "lists.h"

/**
 * listint_len - Return the number of element in list
 * @h: pointer to listint_t
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return(0);
	}
	return(1 + listint_len(h->next));
}
