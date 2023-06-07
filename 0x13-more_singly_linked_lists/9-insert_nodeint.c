#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer x2 to linked list
 * @idx: index where the new node should be added
 * @n: data to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *vogue;
	unsigned int track_nodes;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	vogue = *head;
	for (track_nodes = 0; track_nodes < idx - 1 && vogue != NULL; track_nodes++)
	{
		vogue = vogue->next;
	}

	if (track_nodes < idx - 1 || vogue == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = vogue->next;
	vogue->next = new_node;

	return (new_node);
}
