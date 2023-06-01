#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 *
 * @h: pointer to head of list
 *
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t track_nodes = 0;

	while (h)
	{
		h = h->next;
		track_nodes++;
	}
	return (track_nodes);
}
