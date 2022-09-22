#include "main.h"

/**
 * _strcat - Append src to dest
 * @dest: parameter, which is a pointer to dest
 * @src: parameter, which is a pointer to src
 *
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int dest_pos = 0, src_pos = 0;

	while (dest[dest_pos] != '\0')
	{
		dest_pos++;
	}

	while (src[src_pos] != '\0')
	{
		dest[dest_pos + src_pos] = src[src_pos];
		src_pos++;
	}

	dest[dest_pos + src_pos] = '\0';

	return (dest);
}
