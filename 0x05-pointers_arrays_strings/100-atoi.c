#include "main.h"

/**
 * _atoi - atoi custom implementation
 * @s: parameter of type char
 *
 * Return: int
 */
int _atoi(char *s)
{	
	unsigned int num = 0;
    int i = 0, sign = 1;

    while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
        i++;
		if (s[i] == '-')
		{
            sign *= -1;
        }
    }

    while (s[i] && (s[i] >= '0' && s[i] <= '9'))
    {
        num = num * 10 + (s[i] - '0');
        i++;
    }

    return sign * num;
}
