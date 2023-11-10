#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arguments;

	va_start(arguments, n);
	if (separator == NULL)
	{
		while (i < n)
		{
			printf("%d", va_arg(arguments, int));
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			printf("%d", va_arg(arguments, int));
			if (i != (n - 1))
				printf("%s", separator);
			i++;
		}
	}
	printf("\n");
	va_end(arguments);
}
