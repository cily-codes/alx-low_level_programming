#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: source file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(sizeof(char) * letters);
	int fp;
	ssize_t num_read;

	if (buff == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}

	num_read = read(fp, buff, letters);
	if (num_read == -1)
	{
		free(buff);
		close(fp);
		return (0);
	}
	if (write(STDOUT_FILENO, buff, num_read) != num_read)
	{
		free(buff);
		close(fp);
		return (0);
	}

	free(buff);
	close(fp);
	return (num_read);
}
