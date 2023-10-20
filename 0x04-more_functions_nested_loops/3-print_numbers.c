#include "main.h"

/**
 * @c: The character to be written.
 *
 * Return: On success, 1. On error, -1 is returned.
 *
 * print_numbers - Print the numbers from 0 to 9 followed by a newline.
 */

void print_numbers(void)
{
	int _putchar(char d);

	for (d = '0'; d <= '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
