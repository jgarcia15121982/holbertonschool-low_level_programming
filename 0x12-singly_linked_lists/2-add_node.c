/**
 * add_node - Function that  adds a new node at the beginning
 * of a list_t list.
 * @head: The address of the node
 * @str: String member of the node
 * Return: The number of nodes
 */
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	unsigned int cont = 0;
	unsigned int i = 0;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
		cont++;
	}
	tmp->str = strdup(str);
	tmp->len = cont;
	tmp->next = *head;
	*head =	tmp;
	return (*head);
}
