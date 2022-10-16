#include <stdio.h>
#include <stdlib.h>

/**
* main - the function that prints the fibonacci sequence
*
* Return: 0.
**/

int main(void)
{
        unsigned long n1 = 0, n2 = 1, n3 = 0, sum = 0;

        while (n3 < 4000001)
        {
                n3 = n2 + n1;
                n1 = n2;
                n2 = n3;
		if ((n3 % 2) == 0)
		{
			sum = sum + n3;
		}
        }
	printf("%lu", sum);
        printf("\n");
        return (0);
}

