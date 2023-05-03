#include "main.h"

/**
 * *_strcpy - copies the string to another destination
 *
 * @src: Source
 * @dest: Destination
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int v;

	for (v = 0; src[v] != '\0'; v++)
	{
		dest[v] = src[v];
	}

	dest[v++] = '\0';
	return (dest);
}
