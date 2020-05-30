#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: pointer to a hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;
	hash_node_t *node = NULL;

	if (!ht)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			tmp = node;
			free(tmp->value);
			free(tmp->key);
			node = node->next;
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
