#include "main.h"

/**
* _calloc - a functing which allocates memory for an array.
*
* @nmemb: the number of elements in the array.
* @size: the size of the elements in an array.
*
* Return: the pointer to the array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *caloc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	caloc = malloc(nmemb * size);

	if (caloc == NULL)
	{
		return (NULL);
	}
	return (caloc);
}
