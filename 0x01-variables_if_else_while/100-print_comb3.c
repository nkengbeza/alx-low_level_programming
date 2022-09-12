#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Entry point of the program
  *
  * Description: Prints all possible different combinations of
  * two digits.
  * is a positive, negative or zero.
  *
  * Return: 0. The program always successfully exits with 0
  */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
