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
 * add_new_node - function that add new node to shash struct
 * @h: pointer to the hrad of shash table
 * @key: key of the new node
 * @value: value of the new node
 * Return: pointer to the new node (success), NULL otherwise
*/

shash_node_t *add_new_node(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *temp;

	temp = *h;
	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (temp);
		}
		temp = temp->next;
	}
	temp = malloc(sizeof(hash_node_t));

	if (!temp)
		return (NULL);
	temp->key = strdup(key);
	temp->value = strdup(value);
	temp->next = *h;

	*h = temp;
	return (temp);
}

/**
 * add_to_sorted - add node to the sorted hash table
 * @ht: pointer to hash table
 * @new_node: pointer to the new node
*/

void add_to_sorted(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *temp1, *temp2;
	int n;

	temp1 = temp2 = ht->shead;
	while (temp1)
	{
		n = strcmp(new_node->key, temp1->key);
		if (n == 0)
			return;
		else if (n < 0)
		{
			new_node->sprev = temp1->sprev;

			if (temp1->sprev)
				temp1->sprev->snext = new_node;
			else
				ht->shead = new_node;
			
			temp1->sprev = new_node;
			new_node->snext = temp1;
			return;
		}
		temp2 = temp1;
		temp1 = temp1->snext;
	}
	new_node->sprev = temp2;
	new_node->snext = NULL;

	if (ht->shead)
		temp2->snext = new_node;
	else
		ht->shead = new_node;
	ht->stail = new_node;
}

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = add_new_node(&(ht->array[index]), key, value);
	if (!node)
		return (0);
	add_to_sorted(ht, node);
	return (1);

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

/**
 * shash_table_delete - frees the table
 * @ht: pointer to head of table
*/
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

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
