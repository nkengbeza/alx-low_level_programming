#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: parameter, which is a pointer to n
 *
 * Return: int, which is the length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count += 1;
	}
	return (count);
}
