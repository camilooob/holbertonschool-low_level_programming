#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Create a Dog.
 *@x: name of struct
 *@name: Name of Dog.
 *@age: Age of Dog.
 *@owner: owner of Dog.
 * Return: Always 0.
 */
void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x)
	{
		x->name = name;
		x->age = age;
		x->owner = owner;
	}
	else
	{
		return;
	}
}
