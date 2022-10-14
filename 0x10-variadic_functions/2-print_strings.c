#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: char pointer.
 * @n: int.
 * @...: collection.
 *
 * Return: Void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);

	while (i < n)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}

	printf("\n");

	va_end(strings);
}
