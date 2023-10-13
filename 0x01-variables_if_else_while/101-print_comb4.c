#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (k = 0 ; k <= 7 ; k++)
	{
		for (j = k + 1 ; j <= 8 ; j++)
		{
			for (i = j + 1 ; i <= 9 ; i++)
			{
				putchar(k + '0');
				putchar(j + '0');
				putchar(i + '0');

				if (k != 7 || j != 8 || i != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
