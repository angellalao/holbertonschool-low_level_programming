#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -
 * @d:
 * @name:
 * @age:
 * @owner:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		exit (1);
	}
	d->name = name;
	d->age = age;
	d->owner= owner;
}
