#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 *
 * @head: pointer x2 to linked list
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *vogue, *list;
	unsigned int track_nodes;

	if (*head == NULL)
	{
		return (-1);
	}

	vogue = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(vogue);
		return (1);
	}

	for (track_nodes = 0; track_nodes < index; track_nodes++)
	{
		list = vogue;
		vogue = vogue->next;
		if (vogue == NULL)
		{
			return (-1);
		}
	}

	list->next = vogue->next;
	free(vogue);

	return (1);
}
