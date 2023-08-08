#include "main.h"

/**
 * file_copy - function that copies the content of a file to another file
 *
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: void
 */
void file_copy(const char *file_from, const char *file_to)
{
	int fp_from, fp_to, num_read;
	char buff[BUFFER_SIZE];

	fp_from = open(file_from, O_RDONLY);
	if (file_from == NULL || fp_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fp_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((num_read = read(fp_from, buff, BUFFER_SIZE)) > 0)
	{
		if (write(fp_to, buff, num_read) != num_read || fp_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (num_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fp_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_from);
		exit(100);
	}
	if (close(fp_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_to);
		exit(100);
	}
}

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_copy(argv[1], argv[2]);
	exit(0);
}
