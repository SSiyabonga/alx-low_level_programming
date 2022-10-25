#include "main.h"

/**
* string_nconcat- a function that adds n bytes of string s2 to s1.
*
* @s1: the first string.
* @s2: the second string
* @n: the number of bytes of s2 to be added to s1.
*
* Return: the pointer to the new string,
* NULL if it fails.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_s;
	unsigned int i = 0, c, s;

	if (s1 == NULL)
                s1 = "";
	 if (s2 == NULL)
                s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}
	c = i + (n + 1);

	new_s = malloc(sizeof(char) * c);

	if (new_s == NULL)
		return (NULL);


	for (s = 0; s1[s] != '\0'; s++)
	{
		new_s[s] = s1[s];
	}
	for (i = 0; i < n; i++)
	{
		new_s[s] = s2[i];
		s++;
	}
	new_s[s] = '\0';
	return (new_s);

}
