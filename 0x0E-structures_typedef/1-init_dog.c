#include "dog.h"

/**
 * init_dog - initializes struct dog.
 * @d: struct dog.
 * @name: char pointer.
 * @age: float.
 * @owner: char pointer.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
