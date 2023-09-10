#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with key
 * @ht: pointer to hash_table_t structure
 * @key: key
 * Return: string value associated to the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned int index;

	if (!ht || !key)
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
