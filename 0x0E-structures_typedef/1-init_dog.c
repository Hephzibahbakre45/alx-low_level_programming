#include <stdio.h>
#include "dog.h"

/**
 * init_dog- initialize a variable of struct dog
 * @d: array
 * @name: anme
 * @age: dog age
 * @owner: the owner pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
