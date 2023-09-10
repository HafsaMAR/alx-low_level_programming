#include "hash_tables.h"

/**
 * shash_table_create - function that create an ordered hash table
 * @size: size of the arbucket
 * Return: pointer to the head of hashtable
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	shash_node_t **node;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	node = malloc(sizeof(hash_node_t *) * size);
	if (!node)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		node[i] = NULL;
	}
	ht->size = size;
	ht->array = node;
	ht->shead = NULL;
	ht->stail = NULL;
    return (ht);
}

/**
 * shash_table_get - function that gets the key value stored
 * @ht: pointer to hashtable
 * @key: key to look for
 * Return: value stored
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned int index;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - function that prints the element in sorted order
 * @ht: pointer to hash table structure
*/
void shash_table_print(const shash_table_t *ht)
{
	unsigned int check = 0;
	shash_node_t *node = ht->shead;

	if (!ht)
	{
		return;
	}
	printf("{");
	while (node)
	{
		if (check == 0)
		{
			printf("'%s': '%s'", node->key, node->value);
			check = 1;
		}
			else
				printf(", '%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - function that prints the element in reversed order
 * @ht: pointer to hash table structure
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned int check = 0;
	shash_node_t *node = ht->stail;

	if (!ht)
	{
		return;
	}
	printf("{");
	while (node)
	{
		if (check == 0)
		{
			printf("'%s': '%s'", node->key, node->value);
			check = 1;
		}
			else
				printf(", '%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}