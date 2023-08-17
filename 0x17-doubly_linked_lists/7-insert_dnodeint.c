#include "lists.h"

/**
 * insert_dnodeint_at_index - function that insert a node at index
 * @h: pointer to pointer to doubly linked list
 * @idx: index of the node
 * @n: data to add
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int i = 0;
    dlistint_t *new_node, *current, *previous;

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);
    if (idx == 0)
    {
        new_node = add_dnodeint(h, n);
        return (new_node);
    }
    for (current = *h; current != NULL; current = current->next)
    {
        if (i == idx)
        {
            new_node->n = n;
            new_node->next = current;
            new_node->prev = previous;
            previous->next = new_node;
            current->prev = new_node;
            return (new_node);
        }
        previous = current;
        i++;
    }
    free(new_node);
    return (NULL);
}