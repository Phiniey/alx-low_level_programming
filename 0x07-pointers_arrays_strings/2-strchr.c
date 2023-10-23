#include "main.h"

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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
