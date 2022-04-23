#include "main.h"

/**
 * swap_int - swaping two integers using pointers
 * @a: integer to be swaped
 * @b: integer to be swaped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
	return;
}
