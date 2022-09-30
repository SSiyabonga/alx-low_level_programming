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
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			return ('\0');
		}
		s++;
	}
	return ('\0');
}
