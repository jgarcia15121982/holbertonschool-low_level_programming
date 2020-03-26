#include "lists.h"
/**
 * add_node_end - Function that adds a new node at the end
 * of a list_t list.
 * @head: The address of the node
 * @str: String member of the node
 * Return: A list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int cont = 0;
	unsigned int i = 0;
	list_t *new_node, *aux;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	aux = *head;
	while (str[i] != '\0')
	{
		i++;
		cont++;
	}

	new_node->str = strdup(str);
	new_node->len = cont;
	new_node->next = NULL;

	if (aux == NULL)
		*head = new_node;
	else
	{
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = new_node;
	}
	return (*head);
}
