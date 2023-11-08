#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints dog.
 * @d: the dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
