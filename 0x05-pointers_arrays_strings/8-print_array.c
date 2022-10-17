#include "main.h"
#include <stdio.h>

/**
* print_array - a function that print a given number of elements.
*
* @a: the string provided.
* @n: the number of characters to be printed from a.
*
* Return: nothing
**/

void print_array(int *a, int n)
{
	int i = 0;

	while (n > 0)
	{
		printf("%d", a[i]);
		i++;
		n--;
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
