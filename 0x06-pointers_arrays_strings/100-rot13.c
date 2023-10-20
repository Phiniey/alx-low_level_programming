#include "main.h"

/**
 * rot13 - encode string using the rot13 encoding scheme
 * @st: string to be encoded
 * Return: Returns the encoded string
 */
char *rot13(char *st)
{
	int j, k;
	char *m = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *n = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (j = 0 ; st[j] != '\0' ; j++)
	{
		for (k = 0 ; m[k] != '\0' ; k++)
		{
			if (st[j] == m[k])
			{
				st[j] = n[k];
				break;
			}
		}
	}
	return (st);
}
