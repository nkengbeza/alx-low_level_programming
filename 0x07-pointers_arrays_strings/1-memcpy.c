#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: char pointer.
 * @src: char pointer
 * @n: amount of bytes.
 * Return: char pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) =  *(src + i);
	}

	return (dest);
}
