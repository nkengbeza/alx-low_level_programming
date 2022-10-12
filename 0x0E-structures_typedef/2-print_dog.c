#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("My name is: (nil)\n");
		else
			printf("My name is: %s\n", d->name);

		printf("I am: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
