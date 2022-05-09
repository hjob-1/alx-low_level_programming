#include "dog.h"

/**
 * init_dog - initilize a dogs attributes
 * @name: takes a string value
 * @age: takes an int value
 * @owner: takes a string value
 * @d: takes an struct 
 * Return: return nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->*name = name;
	d->age = age;
	d->*owner = owner;
	}
}
