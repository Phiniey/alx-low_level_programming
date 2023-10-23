#include "main.h"
#include "stddef.h"

/**
 * _strchr - Locates a character in the string.
 * @c: the character to be located.
 * @s: string to search in.
 *
 * Return: Returns the pointer on the first occurence of
 * character c in string s or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
