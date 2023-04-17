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
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
