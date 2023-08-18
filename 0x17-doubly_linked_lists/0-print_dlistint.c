#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double linked list
 *
 * @h: double linked list to prints
 *
 * Return: the number of nodes of the double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++node_num;
		h = h->next;
	}

	return (node_num);
}
