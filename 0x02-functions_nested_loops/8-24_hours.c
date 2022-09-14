#include "main.h"

/**
 * jack_bauer - Prints time
 *
 * Description: Prints minutes time list
 *
 * Return: void.
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar(0 + 48);
			}
			_putchar(i + 48);
			_putchar(':');
			if (j < 10)
			{
				_putchar(0 + 48);
			}
			_putchar(j + 48);
			_putchar('\n');
		}
	}
}

