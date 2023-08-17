#include "lists.h"

/**
 * sum_dlistint - funtion that sums all the date in list
 * @head: pointer to head of doubly linked list
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *node;

    for (node = head; node != NULL; node = node->next)
    {
        sum += node->n;
    }
    return (sum);
}