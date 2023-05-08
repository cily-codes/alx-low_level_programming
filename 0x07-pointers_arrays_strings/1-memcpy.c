#include "main.h"

/**
 * *_memcpy - function that copies memory area
 *
 * @dest: destination
 * @src: Source
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}

	return (dest);
}
