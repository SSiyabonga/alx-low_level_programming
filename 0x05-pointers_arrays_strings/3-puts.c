#include "main.h"

/**
* _puts - printing strings.
* @str: string to be tested
* Return: Always 0.
*
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)

	{
		_putchar(str[i]);
	}
_putchar('\n');
}
