#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked list
 *
 * @h: head of linked list
 *
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t track_nodes = 0;

	while (h)
	{
		h = h->next;
		track_nodes++;
	}
	return (track_nodes);
}
