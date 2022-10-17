#include "main.h"

/**
 * rev_string - reverses a string
 * @s:pointer char
 * return:void
 */
void rev_string(char *s)
{
        int i, n;

        for (i = 0; s[i] != '\0'; i++)
        {
                continue;
        }

        for (n = (i - 1); n >= 0 ; n--)
        {
                _putchar(s[n]);
        }
        _putchar('\n');
return;
}
