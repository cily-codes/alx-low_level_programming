#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * strtow - function that splits a string into words
 *
 * @str: string to be splited
 *
 * Return: splitted string or Null if it fails
 */
char **strtow(char *str)
{
	char **split;
	int a = 0, b = 0, count_words = 0;
	int c, d;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	d = strlen(str);
	for (a = 0; a < d; a++)
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
			count_words++;
	}
	split = malloc((count_words + 1) * sizeof(char *));
	if (split == NULL)
		return (NULL);
	a = 0;
	while (a < count_words)
	{
		while (str[b] == ' ')
			b++;
		c = b;
		while (str[b] != ' ' && str[b] != '\0')
			b++;
		split[a] = malloc((b - c + 1) * sizeof(char));
		if (split[a] == NULL)
		{
			while (a > 0)
				free(split[--a]);
			free(split);
			return (NULL);
		}
		strncpy(split[a], &str[c], b - c);
		split[a][b - c] = '\0';
		a++;
	}
	split[count_words] = NULL;
	return (split);
}
