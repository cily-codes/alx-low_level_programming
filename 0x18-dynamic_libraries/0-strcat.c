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
	int canteen = 0;

	while (dest[canteen] != '\0')
	{
		canteen++;
	}

	while (*src != '\0')
	{
		dest[canteen] = *src;
		src++;
		canteen++;
	}

	dest[canteen] = '\0';
	return (dest);
}
