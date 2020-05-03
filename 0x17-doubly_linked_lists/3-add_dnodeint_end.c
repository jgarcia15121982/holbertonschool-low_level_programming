#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node at
 * the beginning of a dlistint_t list
 * @head: Address of the head pointer
 * @n: integer element for the node
 *
 * Return: A list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	last = *head;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		new_node->prev = last;
	}
	return (*head);
}
