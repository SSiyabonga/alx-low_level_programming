#include "dog.h"

/**
* new_dog - a function that creates a new dog.
*
* @name: the name of the new dog.
* @age: the age of the new dog.
* @owner: the owner of the new dog.
*
* Return: nothing
*/

char *_copy(char *strings);
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || owner == NULL)
	{
			return (NULL);
	}
	ndog = malloc(sizeof(dog_t));

	if (ndog != NULL)
	{
		ndog->name = _copy(name);
		if (ndog->name == NULL)
		{
			free(ndog->name);
			free(ndog);
			return (NULL);
		}
		ndog->age = age;
		ndog->owner = _copy(owner);
		if (ndog->owner == NULL)
		{
			free(ndog->owner);
			free(ndog);
			return (NULL);
		}
		return (ndog);
	}
	return (NULL);
}

/**
* _copy - a function that copies strings.
*
* @name: the string to be copied.
* Return: nothing
*/

char *_copy(char *strings)
{
	int i, j;
	char *namecpy;

	for (i = 0; strings[i] != '\0'; i++)
	{
		continue;
	}

	namecpy = malloc((sizeof(char) * i) + 1);

	if (namecpy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		namecpy[j] = strings[j];
	}
	namecpy[j] = '\0';
	return (namecpy);
}
