#include "main.h"

/**
 * *_strncat - Concatenates two strings
 *
 * @src: source
 * @dest: Destination
 * @n: The maximum number of bytes to be used from src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int canteen = 0;
	int a = 0;

	while (dest[canteen] != '\0')
	{
		canteen++;
	}

	while (src[a] != '\0' && a < n)
	{
		dest[canteen] = src[a];
		canteen++;
		a++;
	}

	dest[canteen] = '\0';
	return (dest);
}
