#include "main.h"
/**
 * print_sign - Prints the sign of a number.
 * @n: The number to be tested.
 * Return: 1 for positive numbers,
 * 0 for 0 and -1 for negative numbers
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
