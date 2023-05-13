#include "main.h"

/**
 * *_strncpy - Copies a string
 *
 * @dest: Destination
 * @src: Source
 * @n: The maximum number of characters to copy
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
