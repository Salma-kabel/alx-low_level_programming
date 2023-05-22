#include "dog.h"

/**
 * free_dog - Frees dogs.
 *
 * @d: dog data type
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

