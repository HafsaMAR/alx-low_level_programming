#include "list.h"
#include <stdio.h>

/**
 * add_nodeint - add node at the beginning of the list
 * @head: pointer to pointer to list
 * @n: input integer
 * Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;
	first_node = malloc(sizeof(listint_t));
	if (first_node == NULL)
	{
		return(NULL);
	}
	first_node->n = n;
	first_node->next = *head;
	*head = first_node;
	return(first_node);
}
