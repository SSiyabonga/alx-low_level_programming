#include "main.h"
#include <stdlib.h>

/**
* str_concat - a function that concatenates two strings.
*
* @s1: first string.
* @s2: second string.
*
* Return: concatnated string
* or NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	int i, c = 0, n = 0, len = 0;
	char *concat;

	for (i = 0; s1[i] != '\0'; i++)
	{
		continue;
	}
	for (c = 0; s2[c] != '\0'; c++)
	{
		continue;
	}

	len = i + c;

	concat = malloc((sizeof(char) * len) + 1);

	if (concat == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			concat[n] = s1[i];
			n++;
		}
	}

	if (s2 != NULL)
	{
		for (c = 0; s2[c] != '\0'; c++)
		{
			concat[n] = s2[c];
			n++;
		}
	}
	concat[n] = '\0';
	return (concat);
}
