#include "main.h"

/**
 * _puts - Prints a string, followed by a new line,
 * @str: parameter, which is a pointer to str
 *
 * Returns void
 */
void _puts(char *str)
{
	int pos = 0;

	while (str[pos] != '\0')
	{
		_putchar(str[pos++]);
	}
	_putchar('\n');
}
