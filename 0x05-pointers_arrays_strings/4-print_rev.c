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

	for(i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
n = i - 1;
	for(n = i; n >= 0; n--)
	{
	_putchar(s[n]);
	}
_putchar('\n');
return;
}
