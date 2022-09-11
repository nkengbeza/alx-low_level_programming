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
	int n;
	char[26] alphabet = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; i++)
	{
		putchar(alphabet[i]);
	}
	putchar("\n");
	return (0);
}
