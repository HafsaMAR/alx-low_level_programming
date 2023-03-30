#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - return number of elements in a list
 * @h: pointer to the singly list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
