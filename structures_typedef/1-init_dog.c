#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to the adress to initialize.
 * @name: dog name.
 * @age: dog age.
 * @owner: Owner of dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
