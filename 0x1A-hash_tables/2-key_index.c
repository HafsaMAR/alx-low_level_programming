#include "hash_tables.h"

/**
 * key_index - function that returns the index in which the key/value should
 * be stored
 * @key: The key
 * @size: the size of the array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);

}