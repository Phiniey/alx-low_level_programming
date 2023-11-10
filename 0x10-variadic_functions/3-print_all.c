#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything based on the given format.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *thisStr, c;

	va_start(args, format);
	while (format && format[i] != '\0')
	{
		c = format[i];
		switch (c)
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			thisStr = va_arg(args, char *);
			if (thisStr == NULL)
				thisStr = "(nil)";
			printf("%s", thisStr);
			break;
		}
		if ((format[i + 1] != '\0') &&
		    ((c == 'c') || (c == 'i') || (c == 'f') || (c == 's')))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");

}
