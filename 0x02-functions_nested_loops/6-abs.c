#include "main.h"
/**
 * _abs - Computes the absolute value of an integer.
 * @n: Parameter of type int
 *
 * Description: This application computes the absolute
 * value of an input n. For example, if n = -14,
 * the absolute vaue is 14
 *
 * Return: an absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
