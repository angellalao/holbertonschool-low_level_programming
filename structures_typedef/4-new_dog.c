#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: NULL or pointer to copied string
 */
char *_strdup(char *str)
{
	char *newstring;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	newstring = malloc(sizeof(char) * (i + 1));
	if (newstring == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j <= i)
	{
		newstring[j] = str[j];
		j = j + 1;
	}
	return (newstring);
}

/**
 * *new_dog - creates a new dog
 * @name: pointer to char - name of dog
 * @age: float - age of dog
 * @owner: pointer to char - owner of dog
 * Return: (dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *namecopy;
	char *ownercopy;

	p = malloc(sizeof(*p));
	if (p == NULL)
	{
		return (NULL);
	}
	namecopy = _strdup(name);
	if (namecopy == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = namecopy;
	p->age = age;
	ownercopy = _strdup(owner);
	if (ownercopy == NULL)
	{
		free(namecopy);
		free(p);
		return (NULL);
	}
	p->owner = ownercopy;
	return (p);
}
