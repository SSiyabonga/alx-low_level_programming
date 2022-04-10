#include <stdio.h>
/**
 * Entry point 
 *
 * Description: a program that prints lowercase alphabets
 *
 */

int main(void)
{
	int c;

	for (c = 0; c < 26; ++c)
		putchar('a' +c);
	putchar('\n');

	return (0);
}
