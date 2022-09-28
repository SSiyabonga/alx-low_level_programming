#include "main.h"

/**
* _puts_recursion - a function that prints a string.
* @s: the string to be printed
*
* Return: void
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s[(i + 1)]);
	}
	_putchar("\n");
}
