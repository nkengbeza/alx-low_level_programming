#include <stdio.h>
/**
  * main - Entry point of the program
  *
  * Description: Prints the alphabet in lowercase, and then in uppercase, followed by a new line.
  *
  * Return: 0. The program always successfully exits with 0
  */
int main(void)
{
	int i;
	char c, alphabet[52] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 52; i++)
	{	
		putchar(alphabet[i]);
	}
	putchar('\n');
	return (0);
}
