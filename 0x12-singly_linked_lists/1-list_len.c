#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - return number of elements in a list
 * @h: pointer to the singly list
 * Return: number of elements
 */
/*size_t print_list(const list_t *h);*/
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

/**
 * print_list - prints all elements of a list_t list.
 * @h: pointer to list_t list
 * Return: number of node
 */
/*
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}*/
