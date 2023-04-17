#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - function that takes in parameters
 * @d: pointer to struct
 * @name: character array
 * @age: age of Dog
 * @owner: string containing owners name
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = malloc(strlen(name) + 1);
	if ((*d).name == NULL)
	{
		exit(1);
	}
	strcpy((*d).name, name);

	d->age = age;

	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		exit(1);
	}
	strcpy(d->owner, owner);
}
