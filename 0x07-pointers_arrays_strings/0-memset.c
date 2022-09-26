#include "main.h"
/**
 * _strncpy - Fills memory with a constant byte
 * @dest: char pointer.
 * @src: char 
 * @n: amount of bytes.
 * Return: char pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
