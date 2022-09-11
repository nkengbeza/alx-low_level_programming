#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Entry point of the program
  *
  * Description: This program will assign a random number to the variable
  * n each time it is executed. Complete the source code in order to print
  * the last digit of the number stored in the variable n.
  *
  * Return: 0. The program always successfully exits with 0
  */
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %d is %d and is 0", n, d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, d);
	}
	return (0);
}
