#include <stdio.h>
#include <stdlib.h>

/**
* main - the function that prints the fibonacci sequence
*
* Return: 0.
**/

int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3, c = 0;

	while (c < 50)
	{
		n3 = n2 + n1;
		n1 = n2;
		printf("%lu, ", n3);
		n2 = n3;
		c++;
	}
	printf("\n");
	return (0);
}
