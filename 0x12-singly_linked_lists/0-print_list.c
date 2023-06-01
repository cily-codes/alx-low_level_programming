#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 *
 * @h: pointer to head of list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t track_nodes;

	for (track_nodes = 0; h != NULL; h = h->next, track_nodes++)
	{
		if (h->str == NULL)
		{
			printf("[0] nil\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
	}
	return (track_nodes);
}
