/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: The head node
 *
 * Return: The number of nodes
 */
#include "lists.h"
size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	
	if (h == NULL)
		return (0);
	
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf ("[%u] %s\n", h->len, h->str);
		
		h = h->next;
		count++;
	}
	return (count);
}
