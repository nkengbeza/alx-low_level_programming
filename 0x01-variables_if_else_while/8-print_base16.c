#include <stdio.h>
/**
  * main - Entry point of the program
  * 
  * Description: Prints all the numbers of base 16 in lowercase,
  * followed by a new line.
  *
  * Return: 0. The program always successfully exits with 0
  */
int main(void)
{
	int i;
	char alphabet[16] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
