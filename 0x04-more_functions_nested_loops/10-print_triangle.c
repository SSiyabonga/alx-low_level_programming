#include "main.h"

/**
* print_triangle - a function that prints a triangle
*
* @size: the size of the triangle.
* Return: nothing.
**/

void print_triangle(int size)
{
	int n = 0, c, s;

	if (size > 0)
	{
		while (n < size)
		{
			s = size - (n + 1);
			c = size - n;

			while (s > 0)
			{
				_putchar(' ');
				s--;
			}

			while (c <= size)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
			n++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
