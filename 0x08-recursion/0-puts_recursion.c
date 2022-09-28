#include "main.h"

/**
 * _puts_recursion - Prints a string,
 * followed by a new line
 * @s: char pointer
 *
 * @Return: void
 */
void _puts_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		_putchar(*(s + 1));
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
