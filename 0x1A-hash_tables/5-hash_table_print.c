#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 *
 * @ht: pointer to hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	short int first;
	unsigned long int size, i;
	hash_node_t **arr, *tmp;

	if (!ht)
		return;

	first = 1;
	arr = ht->array;
	size = ht->size;
	putchar('{');
	for (i = 0; i < size; i++)
	{
		if (arr[i])
		{
			tmp = arr[i];
			while (tmp)
			{
				if (!first)
				{
					printf(", ");
					printf("'%s': '%s'", tmp->key,
					       tmp->value);
				}
				else
				{
					printf("'%s': '%s'", tmp->key,
					       tmp->value);
					first = 0;
				}
				if (!tmp->next)
					break;
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
