#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free dog wii.
 *@x: name.
 *
 * Return: Always 0.
 */
void free_dog(dog_t *x)
{
	if (x != NULL)
	{
	free(x->name);
	free(x->owner);
	free(x);
	}
}
