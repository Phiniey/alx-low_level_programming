#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase ten times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
	if (i < 9)
	_putchar('\n');
	}
}
