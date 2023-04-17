#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	if (!name || age < 0 || !owner)
		return (NULL);

	mydog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!(mydog->name))
	{
		free(mydog);
		return (NULL);
	}
	mydog->age = age;
	mydog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!(mydog->owner))
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	strcpy(mydog->name, name);
	strcpy(mydog->owner, owner);
	mydog->age = age;
	return (mydog);
}
