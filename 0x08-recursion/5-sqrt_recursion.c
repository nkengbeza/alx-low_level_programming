#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: int.
 *
 * Return: int.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}

	return (power_operation(n, 2));
}

/**
 * power_operation - Returns the natural square root of a number.
 * @n: int.
 * @c: int.
 * Return: square root or -1.
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}

	return (0 + power_operation(n, c + 1));
}
