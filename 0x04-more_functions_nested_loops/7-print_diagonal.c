#include "main.h"

/**
* print_diagonal - a function that prints a diagonal line.
*
* @n: the number of '\' to be printed.
* Return: nothing
**/

void print_diagonal(int n)
{
	int c = 0, s;

	if (n > 0)
	{
		while (c < n)
		{
			s = 0;
			while (s <= c)
			{
				_putchar(' ');
				s++;
			}
			_putchar('\\');
			_putchar('\n');
			c++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
