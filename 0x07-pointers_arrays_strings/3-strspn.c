#include "main.h"

/**
 * _strspn - Gets lngth of a prefix substring.
 * @s: char pointer.
 * @accept: char.
 * Return: unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, bool;

	while (*(s + i) != '\0')
	{
		bool = 1;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
			j++;
		}
		if (bool == 1)
		{
			break;
		}
		i++;
	}
	return (i);
}
