#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of strings (words), or NULL
 */

char **strtow(char *str)
{
	int num_words = 0;
	char **words;
	char *word = strtok(str, " ");

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	words = malloc(sizeof(char *) * (strlen(str) + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	while (word != NULL)
	{
		words[num_words] = strdup(word);
		if (words[num_words] == NULL)
		{
			free(words);
			return (NULL);
		}
		num_words++;
		word = strtok(NULL, " ");
	}
	words[num_words] = NULL;
	return (words);

}
