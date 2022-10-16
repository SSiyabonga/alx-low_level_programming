#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_times_table - The function that prints the n times table.
* @n: The n of tables to be printed
*
* Return: nothing.
**/

void print_times_table(int n)
{
	int count, mult, prod, last;

	if (n < 15)
	{
		for (count = 0; count <= n; count++)
		{
			for (mult = 0; mult <= n; mult++)
			{
				prod = count * mult;
				if (prod > 99)
				{
					last = prod % 100;
					_putchar((prod / 100) + '0');
					_putchar((last / 10) + '0');
					_putchar((last % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					if ((prod / 10) > 0)
					{
						_putchar((prod / 10) + '0');
						_putchar((prod % 10) + '0');
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar((prod % 10) + '0');
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
		return;
	}

	else
	{
		return;
	}
}
