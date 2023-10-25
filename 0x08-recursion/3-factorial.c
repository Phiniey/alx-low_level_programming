#include "main.h"

/**
 * factorial - function that calculates the factorial of a number.
 * @n: The number for which the factorial is to be calculated.
 *
 * Return: The factorial of n, or -1 for negative numbers.
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
