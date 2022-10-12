#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog dog_t;

/**
 * struct dog - struct that stores some information of a dog
 * @name: char pointer
 * @age: float
 * @owner: char pointer
 *
 * Description: struct with member name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
