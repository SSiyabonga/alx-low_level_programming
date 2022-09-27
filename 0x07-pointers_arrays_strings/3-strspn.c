#include "main.h"

/**
* _strspn - a function that gets the lenght of prefix substring
*
* @s: the prefix string
* @accept: the tring to searched for
*
* Return: the number of bytes in initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, a, b = 0;

	while (s[i])
	{
		i++;
	}

	for (a = 0; a <= i; a++)
	{
		if (s[a] == accept[a])
		{
			b++;
		}
		continue;
	}
	return (b);
}
