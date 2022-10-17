#include "main.h"

/**
 * print_rev - print a string
 * @s:pointer char
 * return:void
 */
void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}

	for (n = (i - 1); n >= 0 ; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
return;
}
