#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: head of linked list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t track_nodes;

	for (track_nodes = 0; h != NULL; h = h->next, track_nodes++)
	{
		printf("%d\n", h->n);
	}
	return (track_nodes);
}
