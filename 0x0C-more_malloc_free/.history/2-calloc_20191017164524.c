#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - prints concatenate string;
* @nmemb: input string.
* @size: input string.
* Return: Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)

	char *p;
unsigned int i;

if (nmemb <= 0 || size <= 0)
	return (NULL);

p = malloc(nmemb * size);
