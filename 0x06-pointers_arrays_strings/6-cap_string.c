#include "main.h"

/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return: Returns the capitalized string
*/

char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		if (str[index] == ' ' ||
	str[index] == '\t' ||
	str[index] == '\n' ||
	str[index] == ',' ||
	str[index] == ';' ||
	str[index] == '.' ||
	str[index] == '!' ||
	str[index] == '?' ||
	str[index] == '"' ||
	str[index] == '(' ||
	str[index] == ')' ||
	str[index] == '{' ||
	str[index] == '}')
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] -= 32;
			}
		}
	}
	return (str);
}

