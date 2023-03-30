#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: pointer to a pointer to list_t node
 * Return: adress of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t firstnode* = NULL;

	firstnode = malloc(sizeof(list_t));
	if (!head)
	{
		firstnode->str = strdup(str);
		firstnode->next = head;
	}
	firstnode = head;

}
