#include "hash_tables.h"

/**
 * hash_table_get - Function that retrieves a value associated with a key
 *
 * @ht: pointer to hash table you want to look into
 * @key: key, that we are looking for
 *
 * Return: the value associated with the element, or NULL
 * if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht || !key)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			if (!tmp->next)
				break;
			tmp = tmp->next;
		}
	}
	return (NULL);
}
