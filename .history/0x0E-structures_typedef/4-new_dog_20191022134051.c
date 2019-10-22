#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - new cute dog.
 *
 *@name: name of dog.
 *@age: age of dog.
 *@owner: owner of dog.
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;

	x = malloc(sizeof(dog_t));

	if (x == NULL)
		return (NULL);

	x->name = name;
	x->age = age;
	x->owner = owner;

	return (x);
}
