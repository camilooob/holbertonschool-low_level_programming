#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: if is null.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
}
