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
	char *concatenated;
	 int pos = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	len += ac - 1;
	concatenated = malloc(sizeof(char) * len + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[pos++] = av[i][j];
		}
		if (i != ac - 1)
		{
			concatenated[pos++] = '\n';
		}
	}
	concatenated[len] = '\0';
	return (concatenated);
}
