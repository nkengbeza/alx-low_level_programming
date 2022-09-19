#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints half of string
 * @a: parameter, which is a pointer to a
 * @n: parameter of type int
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
