#include "main.h"

/**
* _strlen_recursion - a function that returns the lenght of a string.
* @s: the string whose lenght is to be returned
*
* Return: an integer of the lenght of the string.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
