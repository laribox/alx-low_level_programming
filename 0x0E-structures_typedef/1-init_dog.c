#include "dog.h"

/**
 * init_dog - initializes a struct of dog
 * @d: pointer to struct
 * @name: pointer to name of the dog
 * @age: The dog age
 * @owner: owner of dog pointer
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
