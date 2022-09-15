#include <stdio.h>
#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: parameter of type int
 * @b: parameter of type int
 * @c: parameter of type int
 *
 * Return: int
 */

int largest_number(int a, int b, int c)
{
	int max;

	if (a >= b && a >= c)
	{
		max = a;
	}
	else if (b >= a && b >= c)
	{
		max = b;
	}
	else
	{
		max = c;
	}
	return (max);
}
