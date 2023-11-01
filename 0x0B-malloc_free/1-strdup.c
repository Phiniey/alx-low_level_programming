#include "main.h"

/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated string, or NULL on failure.
 */

char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i;

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		count++;
	}
	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
