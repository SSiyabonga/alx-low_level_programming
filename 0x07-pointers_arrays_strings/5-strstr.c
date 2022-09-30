#include "main.h"

/**
* _strstr - the function that locates a substring.
* @haystack: the string to be searched
* @needle: the string to be searched
* 
* Return: pointer to the begining of the located substring.
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (haystack == needle)
		{
			return (haystack);
		}
		if (*haystack == '\0')
		{
			return ('\0');
			haystack ++;
		}
	}
	return ('\0');
}
