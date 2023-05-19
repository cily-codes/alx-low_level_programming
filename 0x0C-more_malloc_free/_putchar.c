#include <unistd.h>

/**
 * _putchar - writes the character l to stdout
 * @l: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char l)
{
	return (write(1, &l, 1));
}
