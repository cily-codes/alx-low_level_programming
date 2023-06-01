#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer x2 to linked list
 * @str: string to be added to the node and duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *old_list;

	if (str != NULL)
	{
		new_list = malloc(sizeof(list_t));
		if (new_list == NULL)
		{
			return (NULL);
		}
		new_list->str = strdup(str);
		new_list->len = _strlen(str);
		new_list->next = NULL;

		if (*head == NULL)
		{
			*head  = new_list;
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

/**
  * _strlen - Returns the length of a string
  *
  * @s: String to count
  *
  * Return: String length
  */
size_t _strlen(const char *s)
{
	size_t length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
