#include "hash_tables.h"

/**
 * hash_table_set - function that addes an element to the hash table
 * @ht: pointer to the hash_table structure
 * @key: key
 * @value: value to be stored
 * Return: 1 (success) 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp, *node;
	unsigned int index;

	if (!ht)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			if (value == NULL)
				return (0);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!key)
	{
		free(node);
		return (1);
	}
	node->value = strdup(value);
	if (!value)
	{
		free(node->key);
		free(node);
		return (1);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
