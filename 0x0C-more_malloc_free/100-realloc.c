#include "main.h"

/**
 * _realloc - Reallocate a memory block
 * @ptr: The pointer to an allocated memory.
 * @old_size: That old size in bytes.
 * @new_size: The new size in bytes.
 *
 * Return: A pointer to a memory reallocated.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j;
	char *pt;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		pt = malloc(new_size);
		return (pt);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	pt = malloc(new_size);

	if (pt == NULL)
		return (NULL);

	for (j = 0; j < old_size; j++)
	{
		pt[j] = ((char *)ptr)[j];
	}
	free(ptr);
	return (pt);
}
