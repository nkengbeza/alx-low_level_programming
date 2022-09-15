#include "main.h"

/**
 * print_numbers - Prints number 0 to 9
 *
 * Description: The application prints number
 * from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	for (int i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
