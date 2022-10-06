#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly allocated space in memory.
 * @str: char pointer.
 *
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *mem;
	unsigned int i;
	unsigned int str_length = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + str_length) != '\0')
	{
		str_length++;
	}

	str_length++; /* str_length + 1 for new line character*/

	mem = malloc(sizeof(*str) * str_length);

	if (mem == NULL)
	{
		return ('\0');
	}

	for (i = 0; i < str_length; i++)
	{
		mem[i] = *(str + i);
	}
	mem[i] = '\0';

	return (mem);

}
