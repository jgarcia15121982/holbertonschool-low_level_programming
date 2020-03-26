#include "lists.h"
/**
 * free_listint - Function that frees a listint_t list
 * @head: A list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
