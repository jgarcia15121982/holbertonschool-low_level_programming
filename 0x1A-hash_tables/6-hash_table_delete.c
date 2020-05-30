#include "hash_tables.h"

/**
 * hash_table_delete - Function that deletes a hash table
 * @ht: pointer to a hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t **arr, *tmp, *node;

	arr = ht->array;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (arr[i])
		{
			node = arr[i];
			while (node)
			{
				tmp = node;
				free(tmp->key);
				free(tmp->value);
				node = node->next;
				free(tmp);
			}
		}
	}
	free(arr);
	free(ht);
}
