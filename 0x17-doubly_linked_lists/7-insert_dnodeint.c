#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: head of the doubly linked list
 * @idx: index in which insert the new node
 * @n: number to insert in the new node
 *
 * Return: address of the new node, or NULL if it failed
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *new_node = NULL;
	unsigned int iter_times = 0, length = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	if (*h == NULL && idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	length = dlistint_len(*h);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (length == idx)
	{
		return (add_dnodeint_end(h, n));
	}

	current = *h;
	while (current != NULL)
	{
		if (iter_times == idx)
		{
			new_node = create_node(n, current, current->prev);
			current->prev = new_node;
			current = new_node;
			current->prev->next = new_node;
			return (new_node);
		}
		current = current->next;
		++iter_times;
	}
	return (current);
}

/**
 * dlistint_len - counts the number of elements in a doubly linked list
 *
 * @h: double linked list to count
 *
 * Return: number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		++count;
		h = h->next;
	}

	return (count);
}

/**
 * create_node - Create a new node with data
 *
 * @n: number of the new node
 * @next: next node of the new node
 * @prev: previous node of the new node
 *
 * Return: address of the new node created
 */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = next;
	new_node->prev = prev;
	return (new_node);
}
