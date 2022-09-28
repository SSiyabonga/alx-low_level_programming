#include "main.h"

/**
* factorial - a function that returns a factorial of a given number.
* @n: the number given
*
* Return: the factorial of a number
* or -1 if the number is 0
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
