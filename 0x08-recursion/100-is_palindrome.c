#include "main.h"
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (check_palindrome(s, 0, len - 1));
}
/**
 * check_palindrome - Helper function to check if a substring
 * is a palindrome.
 * @s: The input string.
 * @start: The start index of the substring.
 * @end: The end index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
	return (0);
}
