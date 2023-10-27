#include "main.h"

/**
 * sqrt_a - Return the natural square root of a number
 * @a: input number
 * @b: the iterator
 * Return: The square root or -1
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - function that calculates the natural
 * square root of a number.
 * @n: The number for which the square root is to be calculated.
 *
 * Return: The natural square root of n, or -1
 * if there's no natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_a(n, 1));
}
