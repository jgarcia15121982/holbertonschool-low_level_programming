#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at
 * the beginning of a listint_t list
 * @head: Address of the head pointer
 * @n: integer element for the node
 *
 * Return: A node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
