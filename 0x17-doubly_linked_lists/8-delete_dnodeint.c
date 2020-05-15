#include "lists.h"

/**
 * dlistint_len - returns number of elements in doubly linked list
 * @h: pointer to head of linked list
 *
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
 * delete_dnodeint_at_index - deletes the node at index index
 * of a dlistint_t linked list
 * @head: pointer to address of head node in linked list
 * @index: index at which to delete node
 *
 * Return: 1 on success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i, len;

	if (!head)
		return (-1);
	len = dlistint_len(*head);
	if (index >= len)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	else
	{
		tmp = *head;
		for (i = 0; i < index; i++)
			tmp = tmp->next;
		(tmp->prev)->next = tmp->next;
		if (tmp->next)
			(tmp->next)->prev = tmp->prev;
		free(tmp);
	}
	return (1);
}
