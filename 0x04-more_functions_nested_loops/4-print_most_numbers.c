#include "main.h"

/**
 * print_numbers - print the mumbers from 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		i++;
		_putchar(i + '0');
	}
	_putchar('\n');

}
