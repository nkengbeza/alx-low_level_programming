#include "main.h"

/**
 * print_line - Prints _ n times
 * @n: parameter of type in
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
