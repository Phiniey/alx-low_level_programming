#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Return 1 to indicate an arror, 0 for success.
 */

int main(int argc, char *argv[])
{
	int m, n, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	n = atoi(argv[2]);
	result = m * n;

	printf("%d\n", result);
	return (0);
}
