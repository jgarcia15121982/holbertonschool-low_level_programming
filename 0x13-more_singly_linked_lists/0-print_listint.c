#include "lists.h"
/**
 * print_listint - Function that prints all the elements of a listint_t list
 * @h: The head node
 *
 * Return: The number of elements
 */
size_t print_listint(const listint_t *h)
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
