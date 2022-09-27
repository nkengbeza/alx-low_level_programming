#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: char pointer.
 * @accept: char pointer.
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}

	return ('\0');
}
