#include "main.h"

/**
* puts_half - a function that prints half of the string.
* @str: sting variable
*
* Return: void.
*/

void puts_half(char *str)
{
	int i, e;

	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}

	if (i % 2 != 0)
	{
		e = ((i - 1) / 2);
		for (i = e; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		e = ((i + 1) / 2);
		for (i = e; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
return;
}

