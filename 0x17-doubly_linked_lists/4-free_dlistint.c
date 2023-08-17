#include "lists.h"

/**
 * free_dlinstint - function that frees the doubly linked list
 * @head: pointer to head of the lsit
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *curr, *node;

    for (curr = head; curr != NULL; curr = curr->next)
    {
        node = curr;
        free(node);
    }
}