#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: parameter of type int
 *
 * Description: This application checks if the input
 * is positive, negative or 0 and prints sign
 *
 * Return: 1 n is positive, -1 if negative and otherwise 0
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('+');
		return 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		return -1;
	}
	_putchar('0');
	return 0;
}
