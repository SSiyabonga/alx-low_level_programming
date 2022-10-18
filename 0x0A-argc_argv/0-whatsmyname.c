#include "main.h"
#include <stdio.h>

/**
* main - the function that prints the name of the program.
* @agrc: the argument count.
* @agrv: the vector array of arguments.
*
* Return: 0
*/

int main(int agrc, char *agrv[])
{
	(void)agrc;
	printf("%s\n", agrv[0]);
	return (0);
}
