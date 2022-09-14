#include "main.h"

/**
  * print_alphabet_x10 - Entry point
  *
  * Description: This application prints _putchar, followed by a new line."
  */

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		alphabet_count++;
		_putchar('\n');
	}
}
