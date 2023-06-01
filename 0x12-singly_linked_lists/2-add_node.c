#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer x2 to linked list
 * @str: string to be added to the node and duplicated
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head != NULL && str != NULL)
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;

		*head = new_node;
		return (new_node);
	}
	return (0);
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
