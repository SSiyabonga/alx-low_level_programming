#include "main.h"

/**
* puts2 - a funtion that prints every other character.
*
* @str: string variable.
*
* Return: void.
*/

void puts2(char *str)
{
	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}

	n = 0;

	while (n <= (i - 1))
	{
		_putchar(str[n]);
		n = n + 2;
	}
	_putchar('\n');
}
