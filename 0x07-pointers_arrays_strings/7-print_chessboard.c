#include "main.h"

/**
* print_chessboard - a function that prints the chessboard
* @a: the variable for placing the newline character.
*
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int i = 0;

	while (i < 8)
	{
		a[8][i] = '\n';
		i++;
	}
	_putchar("%s", a);
return;
}
