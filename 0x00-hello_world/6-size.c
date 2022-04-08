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

	printf("Ther size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
		printf("The size on an int: %lu byte(s)\n", (unsigned long)sizeof(a));
		printf("The size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
		printf("The size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
		printf("The size of float: %lu byte(s)\n", (unsigned long)sizeof(e)); 
		return (0);
}
