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
	int num_words = 0, i;
	char **words;
	char *word;
	char *str_copy = NULL;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	str_copy = strdup(str);
	if (str_copy == NULL)
	{
		return (NULL);
	}

	words = malloc(sizeof(char *) * (strlen(str) + 1));
	if (words == NULL)
	{
		free(str_copy);
		return (NULL);
	}

	word = strtok(str_copy, " ");
	while (word != NULL)
	{
		words[num_words] = strdup(word);
		if (words[num_words] == NULL)
		{
			for (i = 0; i < num_words; i++)
				 free(words[i]);
			free(words);
			free(str_copy);
			return (NULL);
		}
		num_words++;
		word = strtok(NULL, " ");
	}
	words[num_words] = NULL;
	free(str_copy);
	return (words);

}
