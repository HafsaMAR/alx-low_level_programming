#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_add - adds node at the endof list_t
 * @head: pointer to pointer to list_t
 * @str: input string
 * Return: adress of element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t ** lastnode = head;

	while (lastnode != NULL)
		lastnode = lastnode->next;

	lastnode->next = malloc(sizeof(list_t));
	lastnode->next->next = NULL;
	lastnode->str = strdup(str);
	lastnode->len = strlen(str);
	return(list_t *lastnode->next);
}
