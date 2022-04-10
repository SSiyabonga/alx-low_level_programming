#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that prints lowercase alphabets except for q and e
 *Return: 0
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');

	return (0);
}
