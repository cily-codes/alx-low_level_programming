#include "main.h"
#include <stdlib.h>

/**
 *  *create_array - function that creates an array of chars
 *
 *  @size: Array size
 *  @c: assigned char
 *
 *  Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int a;

	string = malloc(size * sizeof(char));

	if (size == 0 || string == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		string[a] = c;
	}
	return (string);
}
