#include "main.h"

/*
* print_rev: a functions that prints strings in reverse
*
* Return: Always 0
*/

void print_rev(char *s)
{
	int i;
	int n;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}

	for (n = i; n > 0; i--)
	{
		_putchar(s[n]);
	}
}
