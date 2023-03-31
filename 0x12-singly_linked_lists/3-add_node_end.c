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
	list_t * lastnode;
	list_t * node;

	lastnode = malloc(sizeof(list_t));
	if (!lastnode)
		return(NULL);
	lastnode->str = strdup(str);
        lastnode->len = strlen(str);
        lastnode->next = NULL;
	if (!*head)
	{
		*head = lastnode;
	}
	else
	{
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = lastnode;
	}
	return (lastnode);
}
