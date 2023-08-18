#include "lists.h"

/**
  * get_dnodeint_at_index - gets a node from a doubly linked list
 *
  * @head: head of the doubly linked list
  * @index: index to find in the doubly linked list
  *
  * Return: the nth node of a double linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (iter_times == index)
			{
				return (current);
			}
			current = current->next;
			++iter_times;
		}
	}

	return (NULL);
}
