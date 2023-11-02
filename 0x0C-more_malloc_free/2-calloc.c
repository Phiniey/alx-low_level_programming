#include "main.h"

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements
 * @size: Type of the elements
 *
 * Return: A pointer to a memory location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
	{
		p[j] = 0;
	}
	return (p);
}
