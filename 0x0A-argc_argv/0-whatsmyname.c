#include <stdio.h>

/**
 * main - Prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array contain the command line arguments.
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
