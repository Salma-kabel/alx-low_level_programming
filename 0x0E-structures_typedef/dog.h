#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
*struct dog - data type
*@name: name of dog
*@age: age of dog
*@owner: owner's name
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
