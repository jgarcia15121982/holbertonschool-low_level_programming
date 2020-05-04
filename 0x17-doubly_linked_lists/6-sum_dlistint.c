#include "lists.h"
/**
 * sum_dlistint - Function that returns the sum of
 * all the data of a dlistint_t linked list
 * @head: The list
 *
 * Return: The sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
