#include "dog.h"

/**
 * new_dog - Creates a new dog.
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer to struct if success, null otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *str;

	str = malloc(sizeof(dog_t));
	if (str == NULL)
	{
		return (NULL);
	}
	str->name = name;
	str->age = age;
	str->owner = owner;
	return (str);
}
