#include <stdio.h>

/**
 * main - Function that prints the program name.
 * It takes two arguments: argc (argument count) and argv (argument vector).
 * It prints the program name and returns 0 to indicate successful execution.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
