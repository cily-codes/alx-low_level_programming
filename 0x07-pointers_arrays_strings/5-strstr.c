#include "main.h"

/**
 * *_strstr - function that locates a substring
 *
 * @haystack: string to search
 * @needle: substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}

		if (needle[b] == '\0')
		{
			return (&haystack[a]);
		}
	}
	return ('\0');
}
