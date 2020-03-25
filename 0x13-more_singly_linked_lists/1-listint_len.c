#include "lists.h"
/**
 * listint_len - Function that returns the number of elements
 * in a linked listint_t list
 * @h: The head node
 *
 * Return: The number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int cont = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		cont++;
	}
	return (cont);
}
