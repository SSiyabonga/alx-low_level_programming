#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: a program that prints lowercase and uppercase alphabets
 *Return: 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
		putchar('a' + c);
	for (c = 0; c < 26; ++c)
		putchar('A' + c);
	putchar('\n');

	return (0);
}
