#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: printing all base 16 numbers in numbers.
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = ''0'; i <= '9'; ++i)
		putchar(i);
	for (i = 'a'; i <= 'f'; ++i)
		putchar(i);
	putchar('\n');

	return (0);
}
