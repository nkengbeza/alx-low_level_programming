#include <stdio.h>
/**
  * main - Entry point of the program
  *
  * Description: Prints the alphabet in lowercase, followed by a new line.
  *
  * Return: 0. The program always successfully exits with 0
  */
int main(void)
{
	int i;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (alphabet[i] != 'e' && alphabet[i] != 'q') {
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
