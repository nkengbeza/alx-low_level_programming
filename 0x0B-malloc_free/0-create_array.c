#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * @size: unsigned int.
 * @c: char
 *
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
	{
		return ('\0');
	}

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
