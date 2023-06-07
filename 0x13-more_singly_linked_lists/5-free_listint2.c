#include "lists.h"

/**
 * free_listint2 - function frees a listint_t and sets head to NULL
 *
 * @head: pointer x2 to linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head)
	{
		while (*head)
		{
			list = (*head);
			*head = (*head)->next;
			free(list);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
