#include "main.h"

/**
 * print_rev - Prints a string in, followed by a new line,
 * @s: parameter, which is a pointer to str
 *
 * Returns void
 */
void print_rev(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	while (count > 0)
	{
		_putchar(s[--count]);
	}
	_putchar('\n');
}
