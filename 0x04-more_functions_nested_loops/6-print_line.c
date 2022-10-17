#include "main.h"

/**
* print_line - a function that prints a line in the terminal.
*
* @n: the number of '_' characters for prining line.
* return: nothing.
**/

void print_line(int n)
{
	int c = 0;

	if (n > 0)
	{
		while (c < n)
		{
			_putchar('_');
			c++;
		}
	}
	_putchar('\n');
}
