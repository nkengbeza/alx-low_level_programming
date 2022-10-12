#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each array loop
 * @array: array of int pointer
 * @size: t_size.
 * @action: function pointer.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
