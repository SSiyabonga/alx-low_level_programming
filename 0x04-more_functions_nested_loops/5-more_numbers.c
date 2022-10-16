#include "main.h"

/**
* more_numbers - a function that prints 1 - 14 10 times.
*
*
* Return: nothing.
**/

void more_numbers(void)
{
	int c, n;

	for (c = 0; c <= 10; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}
		}
		_putchar('\n');
	}
}
