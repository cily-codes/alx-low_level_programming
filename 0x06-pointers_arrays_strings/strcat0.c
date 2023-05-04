#include "main.h"
#include <stdio.h>

/**
 * *_strcat -  Concatenates two strings
 *
 * @src: Source
 * @dest: Destination
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int sted;
	int a;

	while (dest[sted])
	{
		sted++;
	}

	for (a = 0; src[a] != 0; a++)
	{
		dest[sted] = src[a];
		sted++;
	}

	dest[sted] = '\0';
	return (dest);
}
