#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, arg;
	unsigned int i = 0;
	va_list arguments;

	va_start(arguments, n);
	if (!n)
		return (0);
	while (i < n)
	{
		arg = va_arg(arguments, int);
		sum += arg;
		i++;
	}
	va_end(arguments);
	return (sum);
}
