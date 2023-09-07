#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the root of the hash table
 * Return: pointer to the newly created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;

    if (size == 0)
        return (NULL);
    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return (NULL);
    new_table->size = size;
    /*new_table->array = malloc(sizeof(hash_node_t));
    new_table->array[size] = NULL;
    */return (new_table);
}