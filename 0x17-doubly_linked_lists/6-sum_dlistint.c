#include "lists.h"

/**
 * sum_dlistint - sum of all data (n) in a doubly linked list
 *
 * @head: head of the doubly linked list
 *
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head)
	{
		while (current != NULL)
		{
			sum += current->n;
			current = current->next;
		}
	}

	return (sum);
}
