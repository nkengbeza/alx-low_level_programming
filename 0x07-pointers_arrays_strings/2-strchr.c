#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: char pointer.
 * @c: char
 * Return: char pointer.
 */
char *_strchr(char *s, char c)
{
	unsigned int len = 0;

	while (*(s + len) != '\0')
	{
		if (*(s + len) == c)
		{
			return (s + len);
		}
		len++;
	}

	return ('\0');
}
