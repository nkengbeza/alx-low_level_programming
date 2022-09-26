#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: char pointer.
 * @c: char
 * Return: char pointer.
 */
char *_strchr(char *s, char c)
{
	unsigned int counter = 0;

	while (*(s + counter) != '\0')
	{
		if (*(s + counter) == c)
		{
			return (s + counter);
		}
		counter++;
	}
	if (*(s + counter) == c)
	{
		return (s + counter);
	}

	return ('\0');
}
