#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: pointer to list_t list
 * Return: number of node
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	printf("[%d] %s\n", h->len, h->str);
	i++;
	print_list(h->next);
	return(i);
}
