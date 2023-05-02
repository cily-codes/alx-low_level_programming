#include <unistd.h>

/**
 * _putchar - writes the character v to stdout
 * @v: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char v)
{
	return (write(1, &v, 1));
}
