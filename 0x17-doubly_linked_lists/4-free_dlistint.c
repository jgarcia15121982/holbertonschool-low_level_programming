#include "lists.h"
/**
 * free_dlistint - Function that frees a dlistint_t list
 * @head: A list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}	
}
