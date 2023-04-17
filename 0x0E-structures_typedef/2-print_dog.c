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
	if (!d)
		return;
	d->name ? printf("Name: %s\n",d->name) : printf("Name: (nil)\n");
	(d->age >= 0) ? printf("Age: %f\n",d->age) : printf("Age: (nil)\n");
	d->name ? printf("Owner: %s\n",d->owner) : printf("Owner: (nil)\n");
}
