#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - function that copies a string
 *
 * @str: string to copy
 *
 * Return: A pointer to the copied string, or NULL if it fails
 */
char *_strdup(char *str)
{
	int a, len;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	cpy = malloc((len + 1) * sizeof(char));

	if (cpy == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= len; a++)
	{
		cpy[a] = str[a];
	}

	return (cpy);
}
