#include "lists.h"
/**
 * add_dnodeint - Function that adds a new node at
 * the beginning of a dlistint_t list
 * @head: Address of the head pointer
 * @n: integer element for the node
 *
 * Return: A node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
