#include "main.h"

/**
 * array_range - Creates an array of integers
 * @min: The minimum number in the array
 * @max: The maximum number in the array
 *
 * Return: A pointer to the new created array
 */
int *array_range(int min, int max)
{
	int j, len = 0;
	int *p;

	if (min > max)
		return (NULL);

	len = max - min;
	p = malloc((len + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);
	for (j = 0; j <= len; j++)
	{
		p[j] = min;
		min++;
	}
	return (p);
}
