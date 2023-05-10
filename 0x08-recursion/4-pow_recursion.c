#include "main.h"

/**
 * _pow_recursion -  calculates the value of x raised by y
 *
 * @x: value to be multiplied
 * @y: number of times to multiply x
 *
 * Return: Result of the multiplication
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
