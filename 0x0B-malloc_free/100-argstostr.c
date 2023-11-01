#include "main.h"

/**
 * argstostr - Concatenates all arguments of the program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the new concatenated string,
 * or NULL if it fails.
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	int count = 0;
	char *concatenated;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	concatenated = malloc(sizeof(char) * len + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[count] = av[i][j];
			count++;
		}
		concatenated[count++] = '\n';
	}
	concatenated[count] = '\0';
	return (concatenated);
}
