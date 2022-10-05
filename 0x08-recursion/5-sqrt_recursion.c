#include "main.h"

/**
* _sqrt_recursion - the function which returns the square root of a number.
* @n: the number whoes square root is to be calculated
*
* Return: the square root of n
*/

int _sqrt_recursion(int n)
{
	int x = n;

	return (sqr_root(n, x));
}


int sqr_root(int n, int x)
{
	if (n % (x - 1) != 0)
	{
		x--;
		return (sqr_root(n, x));
	}

	return (n / x);
}
