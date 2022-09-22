#include "main.h"

/**
 * _strncat - Append src to dest
 * @dest: parameter, which is a pointer to dest
 * @src: parameter, which is a pointer to src
 * @n: amount of bytes used from src.
 *
 * Return: char pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_pos = 0, src_pos = 0;

	while (dest[dest_pos] != '\0')
	{
		dest_pos++;
	}

	while (src_pos < n)
	{
		dest[dest_pos + src_pos] = src[src_pos];
		src_pos++;
	}
	
	return (dest);
}
