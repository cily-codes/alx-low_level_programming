#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;

	if (filename == NULL)
	{
		return (-1);
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		if (write(fp, text_content, _strlen(text_content)) == -1)
		{
			return (-1);
		}
	}

	close(fp);
	return (1);
}

/**
 * _strlen - returns the length of a string
 *
 * @s: string to count
 *
 * Return: string length
 */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
