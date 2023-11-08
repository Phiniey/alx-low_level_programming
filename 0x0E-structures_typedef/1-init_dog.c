#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * init_dog - Function that is to initialize dog.
 * @d: pointer to dog.
 * @name: name of that dog.
 * @age: age of dog.
 * @owner: owner of that dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
