#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table in order
 * @ht: pointer to hash_table_t structure
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, check = 0;
	hash_node_t *node;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				if (check == 0)
				{
					printf("'%s': '%s'", node->key, node->value);
					check = 1;
				}
				else
					printf(", '%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
