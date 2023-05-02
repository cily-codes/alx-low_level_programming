#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string to count
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s != '\0'; s++)
	{
		l++;
	}
	return (l);
}
