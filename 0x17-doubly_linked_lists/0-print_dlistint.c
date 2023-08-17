#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *node;
    int i = 0;

    if (h == NULL)
        return (0);
    for (node = h; node != NULL; node = node->next)
    {
        printf("%d\n", node->n);
        i++;
    }
    return (i);
}