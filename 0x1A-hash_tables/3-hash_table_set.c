#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: The hash table for add or update the key/value
 * @key: The key. Cannot be an empty string
 * @value: Is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;
	hash_node_t *new_ht = NULL;

	if (ht == NULL || key == NULL || strlen(key) == 0 ||
	    value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	new_ht = malloc(sizeof(hash_node_t));
	if (!new_ht)
		return (0);
	new_ht->key = strdup(key);
	new_ht->value = strdup(value);
	if (!new_ht->value || !new_ht->key)
		return (0);
	if (ht->array[idx])
	{
		for (tmp = ht->array[idx]; tmp; tmp = tmp->next)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(new_ht->key);
				free(new_ht->value);
				free(new_ht);
				free(tmp->value);
				if (!tmp->value)
					return (0);
				return (1);
			}
		}
		new_ht->next = ht->array[idx];
		ht->array[idx] = new_ht;
	}
	else
	{
		new_ht->next = NULL;
		ht->array[idx] = new_ht;
	}
	return (1);
}
