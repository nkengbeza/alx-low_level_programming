#include <stdio.h>
#include <ctype.h>
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
	char c, alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 52; i++)
	{
		if (i >= 26)
		{
			c = toupper(alphabet[i - 26]);
		}
		else
		{
			c = alphabet[i];
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
