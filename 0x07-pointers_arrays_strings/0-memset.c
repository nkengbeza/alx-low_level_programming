#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: char pointer.
 * @b: char 
 * @n: amount of bytes.
 * Return: char pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) =  b;
	}

	return (s);
}
