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
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
