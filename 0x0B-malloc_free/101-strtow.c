#include "main.h"
#include <stdlib.h>

/**
 * words_count - function to count the number of words in a string.
 *
 * @s: String to evaluate.
 *
 * Return: Number of words.
 */
int words_count(char *s)
{
	int check = 0;
	int counter = 0;
	int track;

	for (track = 0; s[track] != '\0'; track++)
	{
		if (s[track] == ' ')
		{
			check = 0;
		}
		else if (check == 0)
		{
			check = 1;
			counter++;
		}
	}

	return (counter);
}

/**
 * allocate_words - Allocates memory for words in the string.
 *
 * @str: String to split.
 * @counter: Number of words.
 *
 * Return: Pointer to an array of strings or NULL if it fails.
 */
char **allocate_words(char *str, int counter)
{
	char **x = malloc((counter + 1) * sizeof(char *));

	(void) str;
	if (x == NULL)
		return (NULL);

	return (x);
}

/**
 * split_words - Splits the string into words and stores them in the array.
 *
 * @str: String to split.
 * @x: Array to store the words.
 *
 * Return: Array of strings or NULL if it fails.
 */
char **split_words(char *str, char **x)
{
	int a, len, dex, front, back, word_len;
	char *word;

	len = 0;
	while (str[len] != '\0')
		len++;

	dex = 0;
	front = 0;
	back = 0;
	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (front < a)
			{
				back = a;
				word_len = back - front;
				word = malloc((word_len + 1) * sizeof(char));
				if (word == NULL)
				{
					for (a = 0; a < dex; a++)
						free(x[a]);
					free(x);
					return (NULL);
				}
				for (a = front; a < back; a++)
					word[a - front] = str[a];
				word[word_len] = '\0';
				x[dex] = word;
				dex++;
			}
			front = a + 1;
		}
	}
	x[dex] = NULL;
	return (x);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: String to split.
 *
 * Return: Pointer to an array of strings or NULL if it fails.
 */
char **strtow(char *str)
{
	int counter;
	char **x;

	if (str == NULL || *str == '\0')
		return (NULL);

	counter = words_count(str);
	if (counter == 0)
		return (NULL);

	x = allocate_words(str, counter);
	if (x == NULL)
		return (NULL);

	x = split_words(str, x);

	return (x);
}

