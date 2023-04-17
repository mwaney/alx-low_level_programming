#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));
	if (!mydog)
		return (NULL);
	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
	return (mydog);
}
