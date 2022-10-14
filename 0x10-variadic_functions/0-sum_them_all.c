#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Sum of all its paramters.
 * @n: int.
 * @...: collection.
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}

	va_end(nums);

	return (sum);
}
