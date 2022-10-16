#include <stdio.h>

/**
* main - the program that prints all the multiples of 3 and 5.
*
* Return: 0.
**/

int main (void)
{
	int n = 0;

	while (n < 1024)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		{
			printf("%d, ", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
