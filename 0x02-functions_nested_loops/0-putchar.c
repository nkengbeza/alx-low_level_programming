#include <unistd.h>
#include "main.h"

/**
  * _putchar - Writes char, c to the standard output
  * @c: Input character
  *
  * Description: This application prints _putchar, followed by a new line."
  *
  * Return: 1. Returns 1 if successful
  * If failed, returns -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
