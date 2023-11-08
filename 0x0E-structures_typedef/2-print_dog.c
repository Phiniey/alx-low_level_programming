#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints dog.
 * @d: the dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
		}
		if (d->age < 0)
		{
			printf("Age: (nil)\n");
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
