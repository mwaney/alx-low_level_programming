#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a dog struct
 * @d: pointer to the struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	if (d == NULL)
		return;
	if (!d->name)
		name = "(nil)";
	name = d->name;
	
	if (d->age < 0)
		printf("Age: (nill)\n");
	age = d->age;

	if (!d->owner)
		owner = "(nil)";
	owner = d->owner;

	printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
}
