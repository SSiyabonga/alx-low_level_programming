#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
		printf("Size on an int: %lu byte(s)\n", (unsigned long)sizeof(a));
		printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
		printf("Size of long  long int: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(e)); 
		return (0);
}
