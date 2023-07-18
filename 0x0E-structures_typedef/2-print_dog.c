#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (!(d->name))
			d->name = "(nil)";
		else if (!(d->owner))
			d->owner = "(nil)";

		printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
