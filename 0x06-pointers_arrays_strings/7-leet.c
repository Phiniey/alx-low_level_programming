#include "main.h"

/**
 * leet - Encodes a string into 1337 using the leet encoding
 * @st: The string to be encoded
 *
 * Return: The encoded string
 */

char *leet(char *st)
{
	int j;
	int g;
	char *m = "aAeEoOtTlL";
	char *n = "4433007711";

	for (j = 0 ; st[j] != '\0' ; j++)
	{
		for (g = 0 ; g < 10 ; g++)
		{
			if (st[j] == m[g])
			{
				st[j] = n[g];
			}
		}
	}
	return (st);
}
