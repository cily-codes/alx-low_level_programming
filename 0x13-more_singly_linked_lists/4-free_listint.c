#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 *
 * @head: head of the linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}

	free(head);
}
