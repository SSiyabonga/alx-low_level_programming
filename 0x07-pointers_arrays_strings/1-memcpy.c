#include "main.h"

/**
* _memcpy - the function copies n bytes from
*	memory area src to memory area dest
* @dest: the copied memory destination memory area.
* @src: the memory area to be coppied.
* @n: the number of bytes of memory to be copied
*
* Return: the copied memory destination area (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
