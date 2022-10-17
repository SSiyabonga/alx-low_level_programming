#include "main.h"

/**
* print_square - a function that prints a diagonal line.
*
* @size: the size of the square to be printed.
* Return: nothing
**/

void print_square(int size)
{
	int c = 0, s;

	if (size > 0)
	{
		while (c < size)
		{
			s = 0;
			while (s < size)
			{
				_putchar('#');
				s++;
			}
			_putchar('\n');
			c++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
