#include "dog.h"

/**
* print_dog - a function that prints a struct dog.
*
* @d: the pointer passed from main.
* Return: nothing.
*/

void print_dog(struct dog *d)
{
	d->name = name;
	d->age = age;
	d->owner=owner;

	printf("Name: %s\n", name);
	printf("Age: %f\n", age);
	printf("Owner: %s\n", owner);
}
