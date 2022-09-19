#include "main.h"

/**
 * puts_half - Prints half of string
 * @str: parameter, which is a pointer to str
 *
 * Return: void
 */
void puts_half(char *str)
{
	int start = 0, count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	start = (count % 2 == 0) ? count / 2 : (count - 1) / 2;
	if (start > 0)
	{
		start -= 1;
	}
	

	while (str[start] != '\0')
	{
		_putchar(str[start++]);
	}

	_putchar('\n');
}
