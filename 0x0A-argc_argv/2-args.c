#include <stdio.h>

/**
* main - a function that prints all the arguments it receives
* @argc: the number of arguments.
* @argv: an array of arguments.
*
* Return: 0.
**/

int main(int argc, char *argv[])
{
	int i = argc, c = 0;

	while (c < i)
	{
		printf("%s\n", argv[c]);
		c++;
	}
	return (0);
}
