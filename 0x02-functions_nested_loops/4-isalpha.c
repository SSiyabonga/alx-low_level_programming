#include "main.h"
/**
 * _isalpha - checks for alphabetic characters.
 * @c: the character to be checked
 * Return: 1 if c is alphabetic,0 otherwise.
 */
int _isalpha(int c)
{

	for (c >= 'a'; c <= 'z';)
		if (_isalpha(c))
			return (1);
		else
			return (0);
}
