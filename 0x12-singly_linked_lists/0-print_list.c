#include "lists.h";

/**
 * print_list - prints all the elements
 * @h: singly linked list.
 *
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	size_t num_of_elem = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num_of_elem++;
	}

	return (num_of_elem);
}

