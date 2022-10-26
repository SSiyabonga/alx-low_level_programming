#ifndef __DOG_H__
#define __DOG_H__
#include <stdio.h>
#include <stdlib.h>

/**
* struct dog - a structure wich contains a dog info.
*
* @name: the name of the dog.
* @age: the age of the dog.
* @owner: the owner of the dog.
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /*__DOG_H__*/
