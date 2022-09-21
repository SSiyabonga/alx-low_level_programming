#include "main.h"
#include <stdio.h>
/**
* rev_string: a function that reverses a string.
*
* return: Always 0
*/

void rev_string(char *s)
{
	int n , c;

	for(n = 0; s[n] != '\0'; n++)
	{
		continue;
	}
	

	for(c = n; c >= 0; c--)
	{
		putchar(s[n]);
	}
}
