#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @src: pointer to the source memory.
 * @dest: pointer to the destination memory.
 * @n: The number of bytes to copy.
 *
 * Return: Returns a pointer to the destination memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
