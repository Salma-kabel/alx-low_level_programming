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
	char *nname;
	char *nowner;
	dog_t *str;

	str = malloc(sizeof(dog_t));
	if (str == NULL)
	{
		return (NULL);
	}
	nname = malloc(strlen(name) + 1);
	if (nname == NULL)
	{
		free(str);
		return (NULL);
	}
	nowner = malloc(strlen(owner) + 1);
	if (nowner == NULL)
	{
		free(str);
		free(nname);
		return (NULL);
	}
	strcpy(nname, name);
	strcpy(nowner, owner);
	str->name = nname;
	str->age = age;
	str->owner = nowner;
	return (str);
}
