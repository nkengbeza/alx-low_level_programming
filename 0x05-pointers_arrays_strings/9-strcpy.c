#include "main.h"

/**
 * _strcpy - Copies string
 * @dest: parameter, which is a pointer to dest
 * @src: parameter, which is a pointer to src
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	
	return (dest);
}
