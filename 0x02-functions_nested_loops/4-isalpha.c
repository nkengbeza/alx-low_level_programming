#include "main.h"

/**
  * _islower - Prints 0 if is lower other 1
  * @c: parameter of type int
  *
  * Description: This application checks if the input
  * is an alphabetic character
  *
  * Return: 1 if is alpha, otherwise 0
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
    {
		return (0);
    }
}
