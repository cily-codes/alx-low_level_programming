#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 *
 * @str: The string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int len = strlen(str);
	int a;

	for (a = 0; a < len; a++)
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			count++;
		}
	}

	return (count);
}

/**
 * allocate_memory - Allocates memory for the split array.
 *
 * @count: The number of words.
 *
 * Return: Pointer to the allocated memory.
 */
char **allocate_memory(int count)
{
	char **split;

	split = malloc((count + 1) * sizeof(char *));
	if (split == NULL)
	{
		return (NULL);
	}

	return (split);
}

/**
 * split_string - Splits the string into words
 *
 * @str: The string.
 * @split: The split array.
 * @count: The number of words.
 */
void split_string(char *str, char **split, int count)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a < count)
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
			return;
		}

		strncpy(split[a], &str[c], b - c);
		split[a][b - c] = '\0';
		a++;
	}

	split[count] = NULL;
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The string to be splitted.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **split;
	int count;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	count = count_words(str);
	if (count == 0)
	{
		split = malloc(2 * sizeof(char *));
		if (split == NULL)
		{
			return (NULL);
		}

		split[0] = malloc(sizeof(char));
		if (split[0] == NULL)
		{
			free(split);
			return (NULL);
		}

		split[0][0] = '\0';
		split[1] = NULL;
		return (split);
	}

	split = allocate_memory(count);
	if (split == NULL)
	{
		return (NULL);
	}

	split_string(str, split, count);

	return (split);
}

