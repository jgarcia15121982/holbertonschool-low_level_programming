#include "lists.h"
/**
 * dlistint_len - returns number of elements in doubly linked list
 * @h: pointer to head of linked list
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}
	return (total);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to address of head node of doubly linked list
 * @idx: index of the list where new node should be added, starting at 0
 * @n: number to be assigned to data portion of node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int len, i;

	if (!h)
		return (NULL);
	len = dlistint_len(*h);
	if (idx > len)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0 && *h)
	{
		tmp = *h;
		new->prev = tmp;
		new->next = tmp;
		tmp->prev = new;
		*h = new;
	}
	else if (*h)
	{
		tmp = *h;

		for (i = 1; i < idx; i++)
			tmp = tmp->next;

		new->next = tmp->next;
		new->prev = tmp;
		if (tmp->next)
			(tmp->next)->prev = new;
		tmp->next = new;
	}
	else
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
	}
	return (new);
}
