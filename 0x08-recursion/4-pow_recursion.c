#include "main.h"

/**
* _pow_recursion - a function that returns the
* value of x raised to the power of y.
* @x: the value to be raised to y.
* @y: the value x should be raised to the power of.
*
* Return: the value of x raised to the power of y.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
