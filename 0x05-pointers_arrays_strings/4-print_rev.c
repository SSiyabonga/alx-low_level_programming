#include "main.h"

/*
* print_rev - prints strings in reverse
* @i: counting variable
* @n: printing variable
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

	for (n = i; n >= 0; n--)
	{
	_putchar(s[n]);
	}
return;
}
