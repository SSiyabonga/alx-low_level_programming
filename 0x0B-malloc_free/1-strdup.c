#include "main.h"
#include <stdlib.h>

/**
* _strdup - a function that returns a pointer to the copy of a string.
*
* @str: the sting to be copied.
*
* Return: a pointer to the duplicate string or NULL.
**/

char *_strdup(char *str)
{
	int i = 1, d = 0;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		continue;
	}

	dup = malloc((sizeof(char) * i) + 1);

	while (d < i)
	{
		dup[d] = str[d];
		d++;
	}

	dup[d] = '\0';
	return (dup);
}
