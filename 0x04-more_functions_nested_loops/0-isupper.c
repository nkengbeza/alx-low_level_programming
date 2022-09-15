#include "main.h"

/**
 * _isalpha - Check if a letter is uppercase
 * @c: parameter of type int
 *
 * Description: This application checks if the input
 * is uppercase
 *
 * Return: 1 if is upper cases, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 91)
	{
		return (1);
	}
	return (0);
}
