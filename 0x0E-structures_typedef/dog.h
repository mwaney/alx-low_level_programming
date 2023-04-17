#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog structure
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: name of dog owner
 * Description: this is how you define a struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
