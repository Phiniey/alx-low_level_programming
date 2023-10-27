#include "main.h"
/**
 * prime_a - Calcualtes if its prime.
 * @a: The input.
 * @d: The diviser.
 *
 * Return: (0)
 */
int prime_a(int a, int d)
{
	if (a <= 1 || (a != d && a % d == 0))
	{
		return (0);
	}
	else if (a == d)
	{
		return (1);
	}
	return (prime_a(a, d + 1));
}

/**
 * is_prime_number - function that checks if a number is prime.
 * @n: The input number
 *
 * Return: 1 if n is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
