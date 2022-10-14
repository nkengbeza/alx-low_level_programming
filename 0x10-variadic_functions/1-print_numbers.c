#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: char pointer
 * @n: int.
 * @...: int collection.
 *
 * Return: Void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	while (i < n)
	{
		printf("%d", va_arg(nums, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}

	printf("\n");

	va_end(nums);
}
