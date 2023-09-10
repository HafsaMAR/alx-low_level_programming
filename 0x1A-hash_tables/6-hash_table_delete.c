#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: pointer to hash_table_t structure
 */

void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node, *temp;
    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            temp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = temp;
            
        }
    }
    free(ht->array);
    free(ht);
}