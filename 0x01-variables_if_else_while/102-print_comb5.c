#include <stdio.h>

/**
* main - a function that prints a combination of 2 numbers.
*
*
* Return: 0.
**/

int main(void)
{
	int n1, n2, n3, n4;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			for (n3 = 0; n3 <= 9; n3++)
			{
				for (n4 = 1; n4 <= 9; n4++)
				{

					putchar ((n1 % 10) + '0');
					putchar ((n2 % 10) + '0');
					putchar (' ');
					putchar ((n3 % 10) + '0');
					putchar ((n4 % 10) + '0');
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	return (0);
}
