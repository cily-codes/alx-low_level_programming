#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - function that reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated to old_size
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the new memory block
 *
 * Return: pointer to the allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		new = malloc(new_size);

		if (new == NULL)
		{
			return (NULL);
		}
		return (new);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	new = malloc(new_size);
	if (new == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < old_size && a < new_size; a++)
	{
		new[a] = ((char *) ptr)[a];
	}
	free(ptr);
	return (new);
}
