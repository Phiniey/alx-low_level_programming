#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)

	{
		for (j = 0; j <= 9; j++)

		{
			int result = i * j;

			if (j == 0)

			{
				_putchar('0' + result);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + result);
			}
		}
		_putchar('\n');
	}
}
