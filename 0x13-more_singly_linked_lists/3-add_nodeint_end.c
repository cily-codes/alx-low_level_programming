#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end of a linked list
 *
 * @head: head of the linked list
 * @n: int to add to the end of the linked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_list, *old_list;

	if (head)
	{
		new_list = malloc(sizeof(listint_t));
		if (new_list == NULL)
		{
			return (NULL);
		}

		new_list->n = n;
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head = new_list;
			return (*head);
		}
		else
		{
			old_list = *head;
			while (old_list->next)
			{
				old_list = old_list->next;
			}

			old_list->next = new_list;
			return (old_list);
		}
	}
	return (NULL);
}
