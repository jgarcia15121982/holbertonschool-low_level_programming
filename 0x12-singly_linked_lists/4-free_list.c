#include "lists.h"
/**
 * free_list - Function that frees a listint_t list
 * @head: A list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
		aux = head;
	head = head->next;
	free(aux);
}

