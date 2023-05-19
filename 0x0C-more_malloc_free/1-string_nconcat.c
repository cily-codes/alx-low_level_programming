#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate to s1
 *
 * Return: NULL if it fails, or newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int abc = n, len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (len = 0; s1[len]; len++)
	{
		abc++;
	}
	mem = malloc(sizeof(char) * (abc + 1));
	if (mem == NULL)
	{
		return (NULL);
	}
	abc = 0;
	for (len = 0; s1[len]; len++)
	{
		mem[abc++] = s1[len];
	}
	for (len = 0; s2[len] && len < n; len++)
	{
		mem[abc++] = s2[len];
	}
	mem[abc] = '\0';
	return (mem);
}

