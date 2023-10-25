#include "main.h"

/**
 * _print_rev_recursion - function that prints in reverse.
 * @s: r string to be printed in reverse.
 *
 * Return: none.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
