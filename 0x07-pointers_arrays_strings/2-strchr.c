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

	unsigned int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			s = s + s[i];
			return (s);
		}
		else
		{
			i++;
		}
	}
return ('\0');
}
