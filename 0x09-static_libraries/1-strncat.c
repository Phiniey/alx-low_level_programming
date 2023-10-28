#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to concatenate
 *
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	while (dest[destlen] != '\0')
	{
		destlen++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);

}
