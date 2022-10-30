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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*__DOG_H__*/
