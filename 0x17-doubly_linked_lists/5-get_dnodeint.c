#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns a node
 * indicated by a given index
 * @head: The head node
 * @index: index that identifies the node
 *
 * Return: Node found by the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++, head = head->next)
		if (!head)
			return (NULL);
	return (head);
}
