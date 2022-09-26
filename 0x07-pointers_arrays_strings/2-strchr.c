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
	char *p = '\0';

	while (*(s + len) != '\0')
	{
		if (*(s + len) == c)
		{
			p = (s + len);
		}
		len++;
	}

	return (p);
}
