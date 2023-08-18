#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 *
 * @head: head of the doubly linked list
 *
 * Return: Null
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
