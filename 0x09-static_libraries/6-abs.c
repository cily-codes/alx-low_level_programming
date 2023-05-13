#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  *
  * @c: The number to compute.
  *
  * Return: Absolute value of int or 0
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_value;

		abs_value = c * -1;

		return (abs_value);
	}
	else
	{
		return (c);
	}
}
