#include "main.h"

/**
 * print_numbers - Prints number 0 to 9
 *
 * Description: The application prints number
 * from 0 to 9
 */
void print_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
