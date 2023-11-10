#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - Funtion that printsd name.
 * @name: The name to be printed.
 * @f: My function pointer.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
