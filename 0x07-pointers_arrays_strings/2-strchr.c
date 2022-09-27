#include "main.h"

/**
* _strchr - a function that locates a character in a string.
* @s: the string to be checked for the character.
* @c: the character to be checked.
*
* Return: the pointer to the first occurence of the character.
*/

char *_strchr(char *s, char c)
{

	int i = 0, n;

	while (s[i])
	{
		i++;
	}

	for (n = 0; n <= i; n++)
	{
		if (c == s[i])
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
