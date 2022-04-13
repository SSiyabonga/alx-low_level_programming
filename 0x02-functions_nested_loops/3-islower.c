#include "main.h"

/**
 * main -check the code.
 * Description: Checks for lowercase character.
 * Return: 1 if c is lowercase
 * Return: 0
 */
int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
