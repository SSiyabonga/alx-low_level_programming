#include "dog.h"

/**
* init_dog - the structure of a dog nfo.
*
* @d: the pointer to the structure type of dog.
* @name: the name of the dog.
* @age: the age of the dog.
* @owner: the owner of the  dog.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
