#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table
 * @size: The size of the hash table
 *
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht == NULL)
		return (NULL);

	return (new_ht);
}
