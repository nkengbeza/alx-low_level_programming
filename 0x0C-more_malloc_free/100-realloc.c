#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to previous memory block
 * @old_size: int
 * @new_size: int
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return ('\0');
	}

	if (ptr == '\0')
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
