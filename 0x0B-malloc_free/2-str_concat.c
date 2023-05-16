#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len_1, len_2;
	char *canteen;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	len_1 = strlen(s1);
	len_2 = strlen(s2);
	canteen = malloc((len_1 + len_2 + 1) * sizeof(char));

	if (canteen == NULL)
	{
		return (NULL);
	}

	strcpy(canteen, s1);
	strcat(canteen, s2);

	return (canteen);
}
