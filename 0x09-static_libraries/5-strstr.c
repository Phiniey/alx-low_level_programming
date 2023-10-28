#include "main.h"

/**
 * _strstr - Locates a substring in a string.
 * @haystack: The string to search in.
 * @needle: The substring to search for.
 *
 * Return: A pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *sub_haystack;
	char *sub_needle;

	while (*haystack)
	{
		sub_haystack = haystack;
		sub_needle = needle;

		while (*sub_needle && *sub_haystack == *sub_needle)
		{
			sub_haystack++;
			sub_needle++;
		}
		if (!*sub_needle)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
