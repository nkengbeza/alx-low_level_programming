#include <stdio.h>
/**
  * main - Entry point of the program
  *
  * Description: Prints all possible combinations of single-digit numbers.
  *
  * Return: 0. The program always successfully exits with 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
