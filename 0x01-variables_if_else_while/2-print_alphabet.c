#include <stdio.h>
/**
 * Main - Entry point
 *
 * Description: a program that prints lowercase alphabets
 *Return 0
 */

int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
		putchar('a' + c);
	putchar('\n');

	return (0);
}
