#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: pointer to char - name of dog
 * @age: float - age of dog
 * @owner: pointer to char - owner of dog
 * Return: (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dog_t;

	dog_t = malloc(sizeof(struct dog));
	if (dog_t == NULL)
	{
		return (NULL);
	}
	dog_t->name = name;
	dog_t->age = age;
	dog_t->owner = owner;
	return (dog_t);
}
