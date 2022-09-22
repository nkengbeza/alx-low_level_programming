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
	int count = 0, term_pos = 0;

	while (*(dest + term_pos) != '\0')
	{
		term_pos++;
	}

	while (*(src + count) != '\0')
	{
		*(dest + term_pos + count) = *(src + count);
		count++;
	}
	
	return (dest);
}
