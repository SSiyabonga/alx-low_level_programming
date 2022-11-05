#include <stdio.h>
#include <stdlib.h>

/**
* main - the function which add positive numbers.
* @argc: the number of arguments.
* @argv: an array of or arguments
*
* Return: 0 on success, 1 on error.
**/

int main(int argc, char *argv[])
{
	int i, sum = 0, n = 0;
	char c = 'a';

	if (argc < 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 0; i < 26; i++)
	{
		if (*argv[n] == c + i)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[n]);
		}
		if (n < argc)
		{
			n++;
		}
	}

	printf("%d\n", sum);
	return (0);
}
