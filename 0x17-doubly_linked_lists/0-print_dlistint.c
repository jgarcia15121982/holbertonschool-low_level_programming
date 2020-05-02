#include "lists.h"
/**
 * print_dlistint - Function that prints all the elements of a list_t list
 * @h: The head node
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
