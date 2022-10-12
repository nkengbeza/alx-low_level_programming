#include "function_pointers.h"

/**
 * int_index - executes a function on each array loop
 * @array: array of int pointer
 * @size: int.
 * @cmp: function pointer.
 *
 * Return: int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
