#include "main.h"
/**
 * is_prime_number - Detects if an input number is a prime number.
 * @n: int.
 * Return: int.
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}

	return (is_prime(n, 2));
}


/**
 * is_prime - Detects if an input number is a prime number.
 * @n: int.
 * @c: int.
 * Return: int.
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime(n, c + 1));
}
